@interface IESECLiveGoodsProgressBar : UIView
@property (nonatomic) IESECLigoContext ligoContext;
@property (nonatomic) IESECLiveCountDownElementModel countDownInfo;
@property (nonatomic) IESECLiveSaleProgressView progressView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setLigoContext:;
- (id)countDownInfo;
- (id)initWithLigoContext:;
- (id)ligoContext;
- (id)p_getProgressGradientColors:;
- (void)setCountDownInfo:;
- (void)updateComponentWithModel:;
- (void)updateCountDownInterval;
- (void)updateWithProgressBarModel:;
- (void)setProgressView:;
- (void).cxx_destruct;
- (id)progressView;
- (void)setupUI;
@end
