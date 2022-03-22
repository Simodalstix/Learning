const express = require('express');
const req = require('express/lib/request');
const app = express();
const path = require('path');


app.use(express.static(path.join(__dirname, 'public')))

app.set('view engine', 'ejs');
app.set('views', path.join(__dirname, '/views'))

app.get('/', (req, res) => {
    res.render('home.ejs')
})

app.get('/cats', (req, res) => {
    const cats = [ 'blue', 'rocket', 'simon', 'jeanie']
    res.render('cats', { cats })
})

app.get('/r/:subreddit', (req, res) => {
    const { subreddit } = req.params;
    res.render('subreddit', { subreddit });
})

app.listen(3000, () => {
    console.log('Listening on port 3000!')
})