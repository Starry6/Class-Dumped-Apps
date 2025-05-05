@interface WKFormRotatingAccessoryPopover : WKRotatingPopover
- (id)initWithView:;
- (void)accessoryDone;
- (void)popoverWasDismissed:;
- (unsigned long long)popoverArrowDirections;
@end
