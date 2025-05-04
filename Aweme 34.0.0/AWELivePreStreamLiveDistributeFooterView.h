@interface AWELivePreStreamLiveDistributeFooterView : UICollectionReusableView
@property (nonatomic) IESLiveImageView imageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) IESLiveCountTimeLabel countTimeLabel;
@property (nonatomic) q countNum;
@property (nonatomic) AWELivePreStreamCommonFooterViewConfig config;
- (void)p_initUI;
- (void)showTimerCountDownLabel;
- (void)reShowTitleLabel;
- (void)setCountTimeLabel:;
- (id)countTimeLabel;
- (void)setCountNum:;
- (void)stopCount;
- (long long)countNum;
- (void)setTimeLabelWithCount:timeFormatBlock:completion:;
- (void)showCountLabel;
- (void)setConfig:;
- (id)initWithConfig:;
- (id)config;
- (id)initWithFrame:;
- (void)resetCount;
- (void)startCount;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setImageView:;
- (id)imageView;
@end
