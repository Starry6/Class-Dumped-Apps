@interface AWEECOMIMSubCardLogisticsView : UIView
@property (nonatomic) UILabel logisticsInfoLabel;
@property (nonatomic) AWEECOMIMCardComponentProgressView progressView;
- (id)logisticsInfoLabel;
- (void)setLogisticsInfoLabel:;
- (id)progressView;
- (id)initWithFrame:;
- (void)setProgressView:;
- (void).cxx_destruct;
- (void)updateWithData:;
+ (double)designHeight;
@end
