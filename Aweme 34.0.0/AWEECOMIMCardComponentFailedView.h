@interface AWEECOMIMCardComponentFailedView : UIView
@property (nonatomic) UIView contentView;
@property (nonatomic) UIImageView indicatorView;
@property (nonatomic) YYLabel tipLabel;
@property (nonatomic) @? retryBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)tapRetry;
- (id)initWithFrame:;
- (id)contentView;
- (void).cxx_destruct;
- (void)setContentView:;
- (id)indicatorView;
- (void)setIndicatorView:;
- (void)setTipLabel:;
- (id)tipLabel;
- (id)retryBlock;
- (void)setRetryBlock:;
@end
