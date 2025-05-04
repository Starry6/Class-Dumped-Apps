@interface AWETemplateHotspotTapGestureRecognizer : UITapGestureRecognizer
@property (nonatomic) @? touchesEndBlock;
@property (nonatomic) @? touchesMoveBlock;
@property (nonatomic) @? touchesCancelBlock;
- (id)touchesEndBlock;
- (id)touchesMoveBlock;
- (id)touchesCancelBlock;
- (void)setTouchesEndBlock:;
- (void)setTouchesMoveBlock:;
- (void)setTouchesCancelBlock:;
- (void)touchesCancelled:withEvent:;
- (void)touchesEnded:withEvent:;
- (void).cxx_destruct;
- (void)touchesMoved:withEvent:;
@end
