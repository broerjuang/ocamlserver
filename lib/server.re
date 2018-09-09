open Opium.Std;

let port = 8080;

let main = () => {
  print_endline({j| server is runnging on port: 8080|j});
  App.empty
  |> App.port(port)
  |> get("/", _req => `String("hello from opium server") |> respond')
  |> App.run_command;
};