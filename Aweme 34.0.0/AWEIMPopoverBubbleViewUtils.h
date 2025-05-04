@interface AWEIMPopoverBubbleViewUtils : NSObject
+ (id)showSimpleTextStyleBubbleForView:withContent:targetPoint:targetPointOffset:position:autoDismissTime:clickBlock:;
+ (id)showLinkViewStyleBubbleForView:withContent:icon:targetPoint:targetPointOffset:position:autoDismissTime:clickBlock:;
+ (id)popoverForView:withContent:targetPoint:targetPointOffset:position:autoDismissTime:clickBlock:;
+ (id)showMultilineTextStyleBubbleForView:withContent:contentWidth:textAlignment:targetPoint:targetPointOffset:position:autoDismissTime:clickBlock:;
+ (id)__popoverViewWithText:contentWidth:textAlignment:;
@end
