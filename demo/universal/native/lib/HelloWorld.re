[@react.component]
let make = () => {
  let _ = Js.String.toLowerCase("Hello World");
  <html>
    <body>
      <h1> {React.string("Hello World")} </h1>
      <p> {React.string("This is an example")} </p>
    </body>
  </html>;
};
