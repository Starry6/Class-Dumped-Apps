@interface AWELiveExpoundCardGXCountDownView : UIView
@property (nonatomic) YYLabel countDownLabel;
@property (nonatomic) NSTimer flashSaleTimer;
- (id)countDownLabel;
- (void)setCountDownLabel:;
- (void)updateCountDown:;
- (id)flashSaleTimer;
- (void)setFlashSaleTimer:;
- (id)timeStringFromSeconds:;
- (void)gx_bindData:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;
@end
