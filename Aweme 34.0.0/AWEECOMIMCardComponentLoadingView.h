@interface AWEECOMIMCardComponentLoadingView : UIView
@property (nonatomic) UIView contentView;
@property (nonatomic) AWEECOMIMIndicatorView indicatorView;
@property (nonatomic) UILabel tipLabel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithFrame:;
- (id)contentView;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)setContentView:;
- (id)indicatorView;
- (void)stopAnimation;
- (void)setIndicatorView:;
- (void)setTipLabel:;
- (id)tipLabel;
@end
