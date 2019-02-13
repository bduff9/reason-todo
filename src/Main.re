Css.(
	global("body, div", [
		display(`flex),
		flexDirection(`column),
		boxSizing(`borderBox),
		flexShrink(0),
	])
);

Css.(
	global("body", [
		fontSize(px(14)),
		fontFamily("'Century Gothic', Futura, sans-serif"),
	])
);

Css.(
	global("#root", [
		alignItems(center),
		justifyContent(center),
		position(absolute),
		top(zero),
		left(zero),
		bottom(zero),
		right(zero),
	])
);

Css.(
	global("input[type='checkbox']", [
		marginRight(px(10)),
	])
);

Css.(
	global("input[type='text']", [
		alignSelf(stretch),
		padding2(~v=px(3), ~h=px(5)),
		marginTop(px(20)),
	])
);

ReactDOMRe.renderToElementWithId(<TodoApp />, "root");
