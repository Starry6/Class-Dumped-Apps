@interface AWEIMAIEmojiFakeProgressView : UIView
@property (nonatomic) double progress;
@property (nonatomic) NSTimer timer;
@property (nonatomic) UIView<IESIMParticleLoadingProtocol> particleView;
@property (nonatomic) UILabel progressLabel;
@property (nonatomic) AWEIMAIEmojiFakeProgressViewConfig config;
- (void)p_setupUI;
- (id)initWithFrame:config:;
- (void)p_updateProgress;
- (id)particleView;
- (void)setParticleView:;
- (void)startFakeProgress;
- (void)endFakeProgress;
- (void)setConfig:;
- (void)setTimer:;
- (id)timer;
- (id)intrinsicContentSize;
- (id)config;
- (double)progress;
- (void).cxx_destruct;
- (void)setProgress:;
- (id)progressLabel;
- (void)setProgressLabel:;
@end
