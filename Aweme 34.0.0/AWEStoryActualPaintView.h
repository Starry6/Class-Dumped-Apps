@interface AWEStoryActualPaintView : UIView
@property (nonatomic) @? touchBlock;
- (id)touchBlock;
- (void)setTouchBlock:;
- (void)handleTouch:type:;
- (void)touchesCancelled:withEvent:;
- (void)touchesEnded:withEvent:;
- (void).cxx_destruct;
- (void)touchesBegan:withEvent:;
- (void)touchesMoved:withEvent:;
@end
