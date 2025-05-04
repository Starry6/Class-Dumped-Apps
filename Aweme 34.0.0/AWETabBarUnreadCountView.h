@interface AWETabBarUnreadCountView : UIView
@property (nonatomic) UILabel dotLabel;
@property (nonatomic) Q count;
- (id)dotLabel;
- (void)_disappear;
- (void)_appear;
- (void)updateFrameWithWidth:height:;
- (void)updateDotColor:;
- (void)updateTextColor:;
- (void)updateCount:;
- (void)setDotLabel:;
- (void)setCount:;
- (id)initWithFrame:;
- (unsigned long long)count;
- (void).cxx_destruct;
- (void)updateText:;
@end
