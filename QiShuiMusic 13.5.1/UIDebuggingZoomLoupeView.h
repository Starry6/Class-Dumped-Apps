@interface UIDebuggingZoomLoupeView : UIView
@property (nonatomic) {CGPoint=dd} currentlyInspectedPoint;
@property (nonatomic) <UIDebuggingZoomDelegate> delegate;
- (void)drawRect:;
- (void)setDelegate:;
- (id)initWithFrame:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setCurrentlyInspectedPoint:;
- (id)currentlyInspectedPoint;
@end
