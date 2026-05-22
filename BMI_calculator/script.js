function calculateBMI() {

  let height = document.getElementById("height").value;
  let weight = document.getElementById("weight").value;

  if(height === "" || weight === ""){
    alert("Please enter height and weight");
    return;
  }

  let bmi = weight / (height * height);
  bmi = bmi.toFixed(2);

  document.getElementById("result").innerHTML =
    "Your BMI is: " + bmi;

  let category = "";

  if(bmi < 18.5){
    category = "Underweight";
  }
  else if(bmi >= 18.5 && bmi < 24.9){
    category = "Normal Weight";
  }
  else if(bmi >= 25 && bmi < 29.9){
    category = "Overweight";
  }
  else{
    category = "Obese";
  }

  document.getElementById("category").innerHTML =
    "Category: " + category;
}