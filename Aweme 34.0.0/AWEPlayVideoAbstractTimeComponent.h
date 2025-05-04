@interface AWEPlayVideoAbstractTimeComponent : UIView
@property (nonatomic) LOTAnimationView lottieView;
@property (nonatomic) UIImageView iconImgView;
@property (nonatomic) UILabel timeLable;
@property (nonatomic) NSString path;
- (void)updateTime:;
- (id)lottieView;
- (void)setLottieView:;
- (id)iconImgView;
- (void)setIconImgView:;
- (id)timeLable;
- (void)setTimeLable:;
- (id)path;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setSelected:;
- (void)setPath:;
@end
