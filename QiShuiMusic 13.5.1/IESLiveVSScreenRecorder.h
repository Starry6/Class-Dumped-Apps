@interface IESLiveVSScreenRecorder : NSObject
@property (nonatomic) AVAssetWriter writer;
@property (nonatomic) AVAssetWriterInput videoWriterInput;
@property (nonatomic) AVAssetWriterInput audioWriterInput;
@property (nonatomic) AVAssetWriterInputPixelBufferAdaptor bufferAdaptor;
@property (nonatomic) AVCaptureSession session;
@property (nonatomic) BOOL isAudioAvailable;
@property (nonatomic) UIView targetView;
@property (nonatomic) {CGSize=dd} canvasSize;
@property (nonatomic) double canvasScale;
@property (nonatomic) CADisplayLink displayLink;
@property (nonatomic) ^{CGColorSpace=} colorSpace;
@property (nonatomic) double initialFrameStamp;
@property (nonatomic) {?=qiIq} beginTime;
@property (nonatomic) {?=qiIq} endTime;
@property (nonatomic) UIImage cover;
@property (nonatomic) NSURL outputFileURL;
@property (nonatomic) @? completed;
@property (nonatomic) NSDictionary configs;
@property (nonatomic) BOOL playerPixelEnabled;
@property (nonatomic) <HTSLiveStreamPlayerProviderAdapter> player;
@property (nonatomic) UIImage watermarkImage;
@property (nonatomic) Q nullBufferCount;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) double seconds;
@property (nonatomic) double maxDuration;
@property (nonatomic) BOOL isRecording;
- (unsigned long long)nullBufferCount;
- (BOOL)setupVideoInput;
- (id)audioWriterInput;
- (BOOL)backgroundDrawEnabled;
- (id)bufferAdaptor;
- (id)copyFromVideoPlayerAndRedraw;
- (id)cover;
- (id)initWithTargetView:completed:;
- (double)initialFrameStamp;
- (BOOL)isAudioAvailable;
- (void)monitorException:code:description:;
- (BOOL)playerPixelEnabled;
- (void)recreateWarterMarkWithScale:;
- (void)renderVideoCover:;
- (void)requestAudioPermission;
- (void)setAudioWriterInput:;
- (void)setBufferAdaptor:;
- (void)setConfigs:;
- (void)setCover:;
- (void)setInitialFrameStamp:;
- (void)setIsAudioAvailable:;
- (void)setNullBufferCount:;
- (void)setPlayerPixelEnabled:;
- (void)setWatermarkImage:;
- (BOOL)setupAudioInput:;
- (void)startAudioCaptureSession;
- (void)stopAudioCaptureSession;
- (void)updateTargetView:;
- (id)watermarkImage;
- (id)displayLink;
- (void)setDisplayLink:;
- (void)abort;
- (void)setColorSpace:;
- (void)setSession:;
- (void)cancel;
- (id)beginTime;
- (void)dealloc;
- (void)start;
- (id)canvasSize;
- (void)setCompleted:;
- (double)seconds;
- (id)colorSpace;
- (void)stop;
- (id)targetView;
- (void)setEndTime:;
- (BOOL)prepare;
- (void)setBeginTime:;
- (void)setCanvasSize:;
- (id)endTime;
- (id)player;
- (void)setWriter:;
- (void)captureOutput:didOutputSampleBuffer:fromConnection:;
- (id)session;
- (void).cxx_destruct;
- (void)setPlayer:;
- (void)reset;
- (double)canvasScale;
- (id)writer;
- (BOOL)isRecording;
- (void)setTargetView:;
- (id)completed;
- (id)outputFileURL;
- (void)setOutputFileURL:;
- (void)setCanvasScale:;
- (double)maxDuration;
- (void)setMaxDuration:;
- (id)videoWriterInput;
- (void)setVideoWriterInput:;
- (id)videoTransform;
- (id)configs;
- (void)didCaptureFrame:;
@end
