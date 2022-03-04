function Person(first, last, age, eyeColor){
    this.firstName = first;
    this.lastName = last;
    this.age = age;
    this.eyeColor = eyeColor
}

Person.prototype.marks = 20;

Var p = new Person('Anu', 'gopal', 12, 'blue');

console.log(p.hasOwnProperty(marks));
