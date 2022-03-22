const express = require("express");
const app = express();

// app.use((req, res) => {
//     console.log("We've got a new request!")
//     res.send('<h1> this is my webpage</h1>')
// })

app.get("/", (req, res) => {
  res.send("This is the homepage!");
});

app.get("/r/:subreddit", (req, res) => {
  const { subreddit } = req.params;
  res.send(`<h1>browsing the ${subreddit} subreddit</h1>`);
});

app.get("/r/:subreddit/:postId", (req, res) => {
  const { subreddit, postId } = req.params;
  res.send(
    `<h1>browsing the postID:${postId} on the ${subreddit} subreddit</h1>`
  );
});

app.get("/search", (req, res) => {
  const { q } = req.query;
  if (!q) {
    res.send("Nothing found if nothing searched!");
  }
  res.send(`<h1> Showing search results for: ${q} </h>`);
});

app.get("/cats", (req, res) => {
  res.send("meow!!");
});

app.get("/dogs", (req, res) => {
  res.send("woof");
});

app.get("*", (req, res) => {
  res.send("I don't know that path!");
});

app.listen(3000, () => {
  console.log("listening on port 3000!");
});
