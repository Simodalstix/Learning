const express = require('express');
const app = express()
console.dir(app)

app.use(() => {
    console.log("We've got a new request!");

})
app.listen(3000, () => {
    console.log('listening on port 3000!')
})