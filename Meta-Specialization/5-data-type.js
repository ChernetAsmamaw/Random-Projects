/*
Arrays

forEach() methond

- The forEach() method accepts a function that will work on each array item.
- It basiccally allows you to loop over each of their members. 
*/


const fruits = ['kiwi','mango','apple','pear'];

//
function appendIndex(fruit, k) {
    console.log(`${k}. ${fruit}`)
}
fruits.forEach(appendIndex);

// alternative
fruits.forEach( function (f, k) {
    console.log(`${k}. ${f}`)
});


/*
filter() method
- based on a specific test & returns the ones that pass
*/

const nums = [0,10,20,30,40,50];
nums.filter( function(num) {
    return num > 20;
});

/* 
map()
- Map each array item over to another array's item, based on whatever work is performed inside the function that is passed-in to the map as a parameter.
*/

[0,10,20,30,40,50].map( function(num) {
    return num / 10
})





/* 
Maps
A Map it doesn't have inheritance. No prototypes! This makes it useful as a data storage.
*/

let bestBoxers = new Map();
bestBoxers.set(1, "The Champion");
bestBoxers.set(2, "The Runner-up");
bestBoxers.set(3, "The third place");

console.log(bestBoxers);

bestBoxers.get(1); // 'The Champion'


/*
Set
A set is a collection of unique values.
no repetition
*/

new Set(); //To build a new set, you can use the Set constructor:

const repetitiveFruits = ['apple','pear','apple','pear','plum', 'apple'];
const uniqueFruits = new Set(repetitiveFruits);
console.log(uniqueFruits); //{'apple', 'pear', 'plum'}


