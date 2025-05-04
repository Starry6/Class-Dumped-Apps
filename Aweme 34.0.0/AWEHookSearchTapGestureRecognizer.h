@interface AWEHookSearchTapGestureRecognizer : UITapGestureRecognizer
@property (nonatomic) @? touchesBeganBlock;
@property (nonatomic) @? touchesEndBlock;
@property (nonatomic) @? touchesMovedBlock;
@property (nonatomic) @? touchesCancelBlock;
@property (nonatomic) BOOL isMoved;
@property (nonatomic) double touchBeganTimeStamp;
- (void)setTouchesBeganBlock:;
- (id)touchesBeganBlock;
- (id)touchesEndBlock;
- (id)touchesCancelBlock;
- (void)setTouchesEndBlock:;
- (void)setTouchesCancelBlock:;
- (void)setTouchBeganTimeStamp:;
- (BOOL)isMoved;
- (void)setIsMoved:;
- (double)touchBeganTimeStamp;
- (id)touchesMovedBlock;
- (void)setTouchesMovedBlock:;
- (void)touchesCancelled:withEvent:;
- (void)touchesEnded:withEvent:;
- (void).cxx_destruct;
- (void)touchesBegan:withEvent:;
- (void)touchesMoved:withEvent:;
@end
