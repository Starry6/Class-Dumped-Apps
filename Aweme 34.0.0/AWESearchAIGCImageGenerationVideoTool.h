@interface AWESearchAIGCImageGenerationVideoTool : NSObject
@property (nonatomic) <AWEStudioImageToVideoGenerator> videoGenerator;
- (void)reportVideoExportEventWithError:extraParams:;
- (id)videoGenerator;
- (void)createVideoWithImage:successCallback:failCallback:;
- (void)setVideoGenerator:;
- (void)cancel;
- (void).cxx_destruct;
+ (void)prefetchEffect;
+ (id)scene;
+ (id)effectID;
+ (void)clearLocalCache;
@end
