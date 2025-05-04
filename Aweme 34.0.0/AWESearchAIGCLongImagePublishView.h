@interface AWESearchAIGCLongImagePublishView : UIView
@property (nonatomic) AWESearchAIGCWebCaptureView webCaptureView;
@property (nonatomic) AWESearchAIGCImageGenerationVideoTool imageGenerationVideoTool;
@property (nonatomic) DUXLoadingToast loadingView;
@property (nonatomic) NSObject<OS_dispatch_source> timer;
- (void)publishWithSearchID:logParams:resultCallback:;
- (void)launchVideoEditWithVideoPath:requestParams:logParams:;
- (id)webCaptureView;
- (id)imageGenerationVideoTool;
- (id)startTimerWithEventCallback:;
- (id)generationVideoWithImage:successCallback:failCallback:;
- (void)setImageGenerationVideoTool:;
- (id)captureWebViewWithSearchID:finishCallback:;
- (void)setWebCaptureView:;
- (void)setTimer:;
- (void)dealloc;
- (id)timer;
- (void)setLoadingView:;
- (id)initWithFrame:;
- (id)loadingView;
- (void).cxx_destruct;
+ (void)trackLongImageGenerationWithParams:;
+ (void)trackLongImageToVideoConversionWithParams:;
+ (id)showOnView:searchID:logParams:resultCallback:;
@end
