@interface AWEIMUnreadDotView : UIView
@property (nonatomic) UILabel dotLabel;
@property (nonatomic) q count;
- (void)_appear;
- (void)_disappear;
- (long long)countOfShowingNum;
- (id)dotLabel;
- (void)setDotLabel:;
- (void)setCount:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (long long)count;
- (void)updateWithCount:;
- (void)setDotColor:;
+ (id)defaultDotColor;
+ (id)defaultDotTextColor;
+ (void)setDefaultDotColor:;
+ (void)setDefaultDotTextColor:;
@end
