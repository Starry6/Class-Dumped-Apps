@interface IESLiveVSScreenRecorderV2 : NSObject
@property (nonatomic) AVAssetWriter writer;
@property (nonatomic) AVAssetWriterInput videoWriterInput;
@property (nonatomic) AVAssetWriterInput audioWriterInput;
@property (nonatomic) AVAssetWriterInputPixelBufferAdaptor bufferAdaptor;
@property (nonatomic) NSMutableSet observerSet;
@property (nonatomic) NSInteger channels;
@property (nonatomic) NSInteger sampleRate;
@property (nonatomic) UIView targetView;
@property (nonatomic) {CGSize=dd} canvasSize;
@property (nonatomic) double canvasScale;
@property (nonatomic) BOOL isRecording;
@property (nonatomic) ^{CGColorSpace=} colorSpace;
@property (nonatomic) {?=qiIq} beginTime;
@property (nonatomic) {?=qiIq} currentAudioTime;
@property (nonatomic) {?=qiIq} endTime;
@property (nonatomic) UIImage cover;
@property (nonatomic) NSURL outputFileURL;
@property (nonatomic) @? completed;
@property (nonatomic) NSDictionary configs;
@property (nonatomic) BOOL playerPixelEnabled;
@property (nonatomic) BOOL isPlayerStall;
@property (nonatomic) <HTSLiveStreamPlayerProviderAdapter> player;
@property (nonatomic) UIImage watermarkImage;
@property (nonatomic) Q nullBufferCount;
@property (nonatomic) NSMutableArray cvReturnErrorCode;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) double seconds;
@property (nonatomic) double maxDuration;
- (unsigned long long)nullBufferCount;
- (void)playerDidResume;
- (BOOL)setupAudioInput;
- (void)setObserverSet:;
- (BOOL)setupVideoInput;
- (void)addInterruptObserver;
- (id)audioWriterInput;
- (id)bufferAdaptor;
- (id)copyPixelBufferWithPixelBuffer:width:height:;
- (id)cover;
- (id)cvReturnErrorCode;
- (void)didSetAttachingDIContext;
- (id)getPixelBufferAttributes:heigth:width:;
- (id)initWithTargetView:completed:;
- (BOOL)isPlayerStall;
- (void)monitorException:code:description:;
- (void)onRenderVideoFrame:pts:width:height:;
- (void)playerDidStall;
- (void)playerOnRenderAudioFrame:;
- (BOOL)playerPixelEnabled;
- (void)playerWillOpenAudioProcessInAudioRecord:channels:duration:;
- (void)playerWillProcessAudioFrameInAudioRecord:samples:timeStamp:;
- (void)recreateWarterMarkWithScale:;
- (void)renderVideoCover;
- (void)reportCVReturnError;
- (void)setAudioWriterInput:;
- (void)setBufferAdaptor:;
- (void)setConfigs:;
- (void)setCover:;
- (void)setCurrentAudioTime:;
- (void)setCvReturnErrorCode:;
- (void)setIsPlayerStall:;
- (void)setNullBufferCount:;
- (void)setPlayerPixelEnabled:;
- (void)setWatermarkImage:;
- (id)transformBuffer:timeStamp:;
- (void)updateTargetView:;
- (id)watermarkImage;
- (void)abort;
- (int)channels;
- (void)setColorSpace:;
- (void)cancel;
- (id)beginTime;
- (void)dealloc;
- (void)start;
- (id)canvasSize;
- (void)setCompleted:;
- (int)sampleRate;
- (double)seconds;
- (id)colorSpace;
- (void)stop;
- (id)targetView;
- (void)setEndTime:;
- (BOOL)prepare;
- (void)startCaptureSession;
- (void)setBeginTime:;
- (id)observerSet;
- (void)setCanvasSize:;
- (id)endTime;
- (void)setIsRecording:;
- (id)player;
- (void)setWriter:;
- (void)stopCaptureSession;
- (void).cxx_destruct;
- (void)setChannels:;
- (void)setPlayer:;
- (void)reset;
- (double)canvasScale;
- (id)writer;
- (BOOL)isRecording;
- (void)setTargetView:;
- (id)completed;
- (void)setSampleRate:;
- (id)outputFileURL;
- (void)setOutputFileURL:;
- (void)setCanvasScale:;
- (double)maxDuration;
- (void)setMaxDuration:;
- (id)videoWriterInput;
- (void)setVideoWriterInput:;
- (id)configs;
- (id)currentAudioTime;
@end
