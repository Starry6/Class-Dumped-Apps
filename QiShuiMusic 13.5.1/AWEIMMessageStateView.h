@interface AWEIMMessageStateView : UIImageView
@property (nonatomic) UIImage refreshImg;
@property (nonatomic) q type;
@property (nonatomic) double spinDuration;
- (void)p_stopAnimating;
- (void)configWithState:;
- (void)p_startAnimating;
- (id)refreshImg;
- (void)setRefreshImg:;
- (void)setSpinDuration:;
- (BOOL)shouldCheckAWEIMMessageState:;
- (double)spinDuration;
- (void)setType:;
- (id)initWithFrame:;
- (long long)type;
- (void)clear;
- (void).cxx_destruct;
@end
