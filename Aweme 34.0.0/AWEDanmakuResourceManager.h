@interface AWEDanmakuResourceManager : NSObject
@property (nonatomic) BOOL isRequestConfig;
- (id)findLottieJSONPath:;
- (void)setIsRequestConfig:;
- (void)downloadResourceIfNeeded;
- (void)deleteWithModels:;
- (void)downloadWithModels:;
- (void)downloadResourceIfNeededWithModel:;
- (void)deleteResourceIfNeededWithCompletion:;
- (void)cleanResourceIfNeeded;
- (id)pendantLocalPathWithModel:;
- (id)eggLocalPathWithModel:;
- (BOOL)isRequestConfig;
+ (id)sharedInstance;
@end
