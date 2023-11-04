# Rules For the Author

For the author, it’s important to have an open and humble mindset about the feedback they will receive.

- Be humble!
  - Mind that everybody’s code can be improved.
  - You are not perfect.
  - Accept that you will make mistakes.
  - No matter how good you are, you can still learn and improve.
  - Don’t infer your professionalism and reliability as a software developer from infallibility and flawlessness.

- You are not your code
  - Programming is just a skill. It improves with training – and this never stops.
  - Don’t connect your self-worth with the code you are writing.

- Mind that finally, the reviewer wants the same as you: Creating high-quality software. You are on the same side.

- Mind the IKEA effect. You might place a too high value on your own code.

- Consider feedback as a valuable new perspective on your code
  - It reveals your implicit knowledge that is not expressed in the code yet because it appears natural for you.
  - It avoids a tunnel vision.

- Code reviews are a valuable source of best practices and experiences.

- Code reviews are a discussion, not a dictation. It’s fine to disagree, but you have to elaborate your reservations politely and be willing to make compromises.

# Rules For the Reviewer

For the reviewer, it’s important to pay attention to the way they formulate the feedback. This is extremely crucial for your feedback to be accepted.

- Use I-messages:
  - Right: “It’s hard for me to grasp what’s going on in this code.”
  - Wrong: “You are writing cryptic code.”

- Talk about the code, not the coder.
  - Right: “This code is requesting the service multiple times, which is inefficient.”
  - Wrong: “You’re requesting the service multiple times, which is inefficient.”

- Ask questions instead of making statements.
  - Right: “What do you think about the name ‘userId’ for this variable**?**”
  - Wrong: “This variable should have the name ‘userId’.”

- Always refer to the behavior, not the traits of the author.
  - Right: “I believe that you should pay more attention to writing tests.”
  - Wrong: “You are sloppy when it comes to writing tests.”

- Accept that there are different solutions
  - Right: “I would do it in another way, but your solution is also fine.”
  - Wrong: “I always do it this way and you should too.”

- Distinguish between common best practices and your personal taste.
  - Mind that your criticism may just reflect your personal taste and not an objectively wrong code.
  - Make compromises and be pragmatic.

- Don’t jump in front of every train
  - Don’t be a pedant. Don’t criticize every single line in the code. This will annoy the author and reduce their openness to further feedback.
  - Focus on the flaws and code smells that are most important to you.

- Respect and trust the author
  - Nobody writes bad code on purpose.
  - The author wrote the code to the best of their knowledge and belief.

- Mind the OIR-Rule of giving feedback
  - Observation - “This method has 100 lines.”
  - Impact - “This makes it hard for me to grasp the essential logic of this method.”
  - Request - “I suggest extracting the low-level-details into subroutines and give them expressive names.”

- Before giving feedback, ask yourself:
  - Is it true? (opinion != truth)
  - Is it necessary? (avoid nagging, unnecessary comments and out-of-scope work)
  - Is it kind? (no shaming)

- Be humble! You are not perfect and you can also improve.

- It’s fine to say: Everything is good!

- Don’t forget to praise.
