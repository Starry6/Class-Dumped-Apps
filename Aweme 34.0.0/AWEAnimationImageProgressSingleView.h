@interface AWEAnimationImageProgressSingleView : UIView
@property (nonatomic) BDImageView pointImageView;
@property (nonatomic) BDImageView tailImageView;
@property (nonatomic) UIView tintView;
@property (nonatomic) double currentProgress;
@property (nonatomic) double currentProcess;
@property (nonatomic) BOOL isAnimating;
- (void)setPointImageView:;
- (id)pointImageView;
- (void)setupWithBGColor:tintColor:pointImageConfig:tailImageConfig:;
- (void)updateProgressWithDuration:progress:needAnimation:isFinished:isPlaying:;
- (id)tintView;
- (double)currentProcess;
- (void)setTintView:;
- (double)currentProgress;
- (id)initWithFrame:;
- (void)setCurrentProgress:;
- (BOOL)isAnimating;
- (void).cxx_destruct;
- (void)setIsAnimating:;
- (void)setupUI;
- (void)setCurrentProcess:;
- (void)setTailImageView:;
- (id)tailImageView;
@end
