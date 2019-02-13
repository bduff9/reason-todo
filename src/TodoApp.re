let component = ReasonReact.statelessComponent("TodoApp");

module Styles = {
	open Css;

	let app = style([
		width(px(280)),
		maxHeight(px(600)),
		flex(1),
		boxShadow(~x=zero, ~y=px(2), ~blur=px(15), hex("ccc")),
		margin(px(10)),
		alignItems(stretch),
	]);

	let title = style([
		fontSize(px(20)),
		alignItems(center),
		padding(px(20)),
	]);

	let items = style([
		margin2(~v=px(10), ~h=zero),
		textAlign(center),
		flex(1),
		overflow(auto),
	]);

	let footer = style([
		alignItems(flexStart),
		padding2(~v=px(5), ~h=px(10)),
	]);

	let item = style([
		display(`flex),
		padding2(~v=px(10), ~h=px(20)),
		alignItems(center),
		flexDirection(row),
	]);

	let checkbox = style([
		marginRight(px(20)),
	]);
};

let make = _children => {
	...component,
	render: _self =>
		<div className=Styles.app>
			<div className=Styles.title>
				(ReasonReact.string("What to do"))
			</div>
			<div className=Styles.items> (ReasonReact.string("Nothing")) </div>
		</div>
};
