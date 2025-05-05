@interface CSJUgenCountDownSkipWidget : UgenWidget
@property (nonatomic) UIView adView;
@property (nonatomic) UILabel countLabel;
@property (nonatomic) UILabel skipLabel;
@property (nonatomic) q reduceTime;
- (id)adView;
- (long long)reduceTime;
- (void)setAdView:;
- (void)setReduceTime:;
- (void)setSkipLabel:;
- (id)skipLabel;
- (id)ugenView;
- (void)updateWithSkipTime:duration:currentTime:playLoop:;
- (void)viewAction;
- (id)init;
- (void)layout;
- (void).cxx_destruct;
- (void)render;
- (id)countLabel;
- (void)setCountLabel:;
@end
