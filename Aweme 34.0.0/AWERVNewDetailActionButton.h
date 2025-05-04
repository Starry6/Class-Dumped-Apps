@interface AWERVNewDetailActionButton : UIButton
@property (nonatomic) BOOL needImageAnimation;
@property (nonatomic) @? touchUpInsideBlock;
- (void)setTouchUpInsideBlock:;
- (BOOL)needImageAnimation;
- (void)_onTouchUpInside;
- (void)setNeedImageAnimation:;
- (id)init;
- (void)touchesCancelled:withEvent:;
- (id)imageRectForContentRect:;
- (id)titleRectForContentRect:;
- (void)touchesEnded:withEvent:;
- (void).cxx_destruct;
- (void)touchesBegan:withEvent:;
- (id)touchUpInsideBlock;
@end
