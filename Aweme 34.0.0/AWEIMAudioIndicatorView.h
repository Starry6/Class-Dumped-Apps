@interface AWEIMAudioIndicatorView : UIView
@property (nonatomic) UILabel bottomLabel;
@property (nonatomic) UIImageView centerImageView;
@property (nonatomic) UILabel centerLabel;
@property (nonatomic) BOOL delayDismissing;
- (void)p_setupUI;
- (void)showImage:bottomText:;
- (void)p_dismiss;
- (void)showImage:bottomText:timeout:;
- (void)p_presentIfNeeded;
- (void)setDelayDismissing:;
- (BOOL)delayDismissing;
- (void)showVolume:bottomText:;
- (void)showText:bottomText:;
- (id)initWithFrame:;
- (void)dismiss;
- (void).cxx_destruct;
- (void)dismiss:;
- (void)setBottomLabel:;
- (id)bottomLabel;
- (void)setCenterLabel:;
- (id)centerImageView;
- (id)centerLabel;
- (void)setCenterImageView:;
+ (id)instance;
@end
