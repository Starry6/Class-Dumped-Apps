@interface IESLiveInteractionFanticketProgressView : UIView
@property (nonatomic) IESLiveGradientView progressBar;
@property (nonatomic) double progress;
@property (nonatomic) BOOL isInGrowAnimation;
@property (nonatomic) BOOL needUpdateProgress;
- (BOOL)isInGrowAnimation;
- (BOOL)needUpdateProgress;
- (void)setIsInGrowAnimation:;
- (void)setNeedUpdateProgress:;
- (id)init;
- (void)setProgress:;
- (double)progress;
- (void)setup;
- (void).cxx_destruct;
- (id)progressBar;
- (void)setProgressBar:;
- (void)updateProgress:;
@end
