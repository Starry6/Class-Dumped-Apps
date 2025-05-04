@interface AWESearchBarButton : UIButton
@property (nonatomic) @? btnTouchBeganBlock;
@property (nonatomic) @? btnTouchCancelBlock;
- (id)btnTouchBeganBlock;
- (id)btnTouchCancelBlock;
- (void)setBtnTouchBeganBlock:;
- (void)setBtnTouchCancelBlock:;
- (void)touchesCancelled:withEvent:;
- (void).cxx_destruct;
- (void)touchesBegan:withEvent:;
@end
