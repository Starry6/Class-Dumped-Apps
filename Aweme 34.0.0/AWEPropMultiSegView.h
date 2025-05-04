@interface AWEPropMultiSegView : UIView
@property (nonatomic) q state;
@property (nonatomic) UIImageView completeImageView;
@property (nonatomic) UIImageView bottomImageView;
@property (nonatomic) UILabel secondsLabel;
@property (nonatomic) UIView grayCoverView;
- (id)completeImageView;
- (void)setCompleteImageView:;
- (id)grayCoverView;
- (void)setGrayCoverView:;
- (id)initWithFrame:;
- (long long)state;
- (void).cxx_destruct;
- (void)setState:;
- (void)setupSubviews;
- (id)bottomImageView;
- (void)setBottomImageView:;
- (id)secondsLabel;
- (void)setSecondsLabel:;
@end
