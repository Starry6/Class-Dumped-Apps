@interface WebNodeHighlight : NSObject
- (void)detach;
- (void)dealloc;
- (id)highlightView;
- (void)attach;
- (void)setDelegate:;
- (id)targetView;
- (void)setNeedsDisplay;
- (id)delegate;
- (id).cxx_construct;
- (id)initWithTargetView:inspectorController:;
- (id)inspectorController;
@end
