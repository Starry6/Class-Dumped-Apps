@interface AWELiveSoloKTVPublishServiceImpl : NSObject
@property (nonatomic) <AWEStudioSoloKTVPublishService> publishService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setPublishService:;
- (id)publishService;
- (id)convertToStudioConfigWithLiveConfig:;
- (long long)convertToLiveResultWithStudioResult:;
- (void)silentlyPublishWithFilePath:publishConfig:trackExtra:progressBlock:completionBlock:;
- (BOOL)existPublishingTask;
- (void)cancelCurrentPublishTaskWithCallBack:;
- (void)saveDraftWithFilePath:trackExtra:completion:;
- (void).cxx_destruct;
@end
