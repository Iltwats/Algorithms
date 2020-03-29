var marks = 0
var subject = 0
var grade = "A+BFCDEfg"
grade = grade.toUpperCase().replace(/ /g, "");

for (let i = 0; i < grade.length; i++) {
    if (grade[i] == 'A' && grade[i + 1] == '+') {
        marks += 10;
        subject++;
        i++;
    } else if (grade[i] < 'F') {
        marks += 74 - grade.charCodeAt(i)
        subject++;
    } else {

    }
}
console.log("GPA=" + marks / subject)
