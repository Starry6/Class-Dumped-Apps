@interface AWEIMAudioIndicatorView : UIView
@property (nonatomic) UILabel bottomLabel;
@property (nonatomic) UIImageView centerImageView;
@property (nonatomic) UILabel centerLabel;
@property (nonatomic) BOOL delayDismissing;
- (BOOL)delayDismissing;
- (void)p_dismiss;
- (void)p_presentIfNeeded;
- (void)p_setupUI;
- (void)setDelayDismissing:;
- (void)showImage:bottomText:;
- (void)showImage:bottomText:timeout:;
- (void)showText:bottomText:;
- (void)showVolume:bottomText:;
- (void)dismiss;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)dismiss:;
- (id)bottomLabel;
- (void)setBottomLabel:;
- (id)centerLabel;
- (void)setCenterLabel:;
- (id)centerImageView;
- (void)setCenterImageView:;
+ (id)instance;
@end
