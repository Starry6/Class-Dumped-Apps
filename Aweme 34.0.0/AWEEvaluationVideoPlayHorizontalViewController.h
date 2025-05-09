@interface AWEEvaluationVideoPlayHorizontalViewController : AWEEvaluationVideoPlayViewController
@property (nonatomic) UILabel lottieDiscription;
@property (nonatomic) UIButton lottieButton;
@property (nonatomic) NSMutableArray videoEngineArray;
@property (nonatomic) NSMutableArray playViewArray;
@property (nonatomic) NSMutableArray sourceVideoList;
@property (nonatomic) NSMutableArray videoURLNumberOfData;
@property (nonatomic) q shortVideoIndex;
@property (nonatomic) NSMutableArray videoLengthArray;
@property (nonatomic) BOOL isSingleSetted;
@property (nonatomic) BOOL isRandom;
@property (nonatomic) UIPanGestureRecognizer panGesture;
@property (nonatomic) UIPinchGestureRecognizer pinGesture;
@property (nonatomic) double lastScale;
@property (nonatomic) double maxScale;
@property (nonatomic) double minScale;
@property (nonatomic) Q originSupportOrientation;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)videoEngine:loadStateDidChanged:;
- (void)videoEngineReadyToDisPlay:;
- (void)interfaceOrientationAdaptTo:;
- (void)progressSliderTouchEnded:;
- (void)setAnchorPoint:forView:;
- (BOOL)isRandom;
- (void)setIsRandom:;
- (void)setupPlayerView;
- (id)initWithTaskData:;
- (void)setLastScale:;
- (unsigned long long)originSupportOrientation;
- (void)setVideoLengthArray:;
- (void)setSourceVideoList:;
- (void)setVideoURLNumberOfData:;
- (id)videoURLNumberOfData;
- (id)sourceVideoList;
- (void)setOriginSupportOrientation:;
- (void)setLottieDiscription:;
- (id)lottieDiscription;
- (void)setLottieButton:;
- (id)lottieButton;
- (void)setPlayViewArray:;
- (id)playViewArray;
- (void)setVideoEngineArray:;
- (id)videoEngineArray;
- (id)pinGesture;
- (void)setIsSingleSetted:;
- (id)videoLengthArray;
- (void)p_canclePreloadWithURLs;
- (long long)shortVideoIndex;
- (BOOL)isSingleSetted;
- (void)adjustFrame:withView:width:height:;
- (void)setShortVideoIndex:;
- (void)viewMove:;
- (void)viewZoom:;
- (void)gotoClosePage;
- (void)p_configAllVideoTask;
- (void)makeViewLayout;
- (void)setupLottieView;
- (void)p_configPreloadWithURLs;
- (void)setPlayerURL;
- (id)paramater;
- (id)currentVideoEngine;
- (BOOL)isSecondVideoPlayed;
- (void)setPinGesture:;
- (double)maxScale;
- (unsigned long long)preferredScreenEdgesDeferringSystemGestures;
- (BOOL)shouldAutorotate;
- (void)viewWillDisappear:;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)close;
- (void)dealloc;
- (void)play;
- (void)viewDidLoad;
- (BOOL)gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:;
- (double)minScale;
- (void)viewWillAppear:;
- (void).cxx_destruct;
- (double)lastScale;
- (void)pause;
- (void)setMaxScale:;
- (id)panGesture;
- (void)setPanGesture:;
- (void)setMinScale:;
@end
