@interface AWEIMMessageStateView : UIImageView
@property (nonatomic) q state;
@property (nonatomic) UIImage refreshImg;
@property (nonatomic) q type;
@property (nonatomic) double spinDuration;
- (void)configWithState:;
- (void)p_startAnimating;
- (void)setSpinDuration:;
- (void)p_stopAnimating;
- (BOOL)shouldCheckAWEIMMessageState:;
- (id)refreshImg;
- (double)spinDuration;
- (void)setRefreshImg:;
- (id)initWithFrame:;
- (long long)state;
- (void)clear;
- (long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (void)setState:;
@end
