@interface AWELeftSideWeatherTapGestureRecognizer : UITapGestureRecognizer
@property (nonatomic) @? touchesBeganBlock;
@property (nonatomic) @? touchesEndBlock;
@property (nonatomic) @? touchesMoveBlock;
@property (nonatomic) @? touchesCancelBlock;
- (void)setTouchesBeganBlock:;
- (id)touchesBeganBlock;
- (id)touchesEndBlock;
- (id)touchesMoveBlock;
- (id)touchesCancelBlock;
- (void)setTouchesEndBlock:;
- (void)setTouchesMoveBlock:;
- (void)setTouchesCancelBlock:;
- (void)touchesCancelled:withEvent:;
- (void)touchesEnded:withEvent:;
- (void).cxx_destruct;
- (void)touchesBegan:withEvent:;
- (void)touchesMoved:withEvent:;
@end
