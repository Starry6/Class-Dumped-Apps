@interface AWESearchGuideView : UIView
@property (nonatomic) NSString lottieFilePath;
@property (nonatomic) NSString accessKey;
@property (nonatomic) BOOL lottieIsDownload;
@property (nonatomic) LOTAnimationView lottieView;
- (id)lottieView;
- (void)setLottieView:;
- (void)setLottieFilePath:;
- (id)lottieFilePath;
- (BOOL)checkLottieIsDownLoad;
- (void)lottieResourceDownload;
- (BOOL)lottieIsDownload;
- (void)addTipLabel:;
- (void)setLottieIsDownload:;
- (void)addLottieView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)accessKey;
- (void)setAccessKey:;
@end
