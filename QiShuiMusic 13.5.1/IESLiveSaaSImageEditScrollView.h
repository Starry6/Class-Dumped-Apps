@interface IESLiveSaaSImageEditScrollView : UIScrollView
@property (nonatomic) @? touchesBegan;
@property (nonatomic) @? touchesEnded;
- (void)setTouchesBegan:;
- (void)setTouchesEnded:;
- (id)touchesBegan;
- (id)touchesEnded;
- (void)touchesBegan:withEvent:;
- (void).cxx_destruct;
- (void)touchesEnded:withEvent:;
- (void)touchesCancelled:withEvent:;
@end
