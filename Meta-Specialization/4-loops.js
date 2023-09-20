// Task 1
var dairy = ['cheese', 'sour cream', 'milk', 'yogurt', 'ice cream', 'milkshake']
function logDairy() {
    for (d of dairy) {
        console.log(d);
    }
}

logDairy()


// Task 2
const animal = {
    canJump: true
};

const bird = Object.create(animal);
bird.canFly = true;
bird.hasFeathers = true;

// Because we can't iterate over objects we use the Objects. built in function
function birdCan() {
    for (b of Object.keys(bird)) {
        console.log(b + ":" + " " + bird[b])
    }
}

birdCan()

// Task 3

function animalCan() {
    const animal = {
        canJump: true
    };

    const bird = Object.create(animal);

    bird.canFly = true;

    bird.hasFeathers = true;
    
    for (const prop in bird) {//loops over all properties in the object,  including the prototype's properties.
        console.log(prop + ":" + " " + bird[prop]);
    }
}

    animalCan();



    