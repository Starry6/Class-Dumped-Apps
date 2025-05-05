@interface UIWebFormRotatingAccessoryPopover : UIWebRotatingNodePopover
- (void)accessoryDone;
- (id)initWithDOMNode:;
- (void)popoverWasDismissed:;
- (unsigned long long)popoverArrowDirections;
@end
