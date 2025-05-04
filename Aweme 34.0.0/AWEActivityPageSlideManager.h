@interface AWEActivityPageSlideManager : NSObject
@property (nonatomic) NSDictionary angelConfig;
- (void)handleUGLynxPageDidAppearNotification:;
- (void)registerExperiment;
- (BOOL)hitWhiteList:;
- (BOOL)enableActivityPageSlideHook;
- (void)trackActivityPageSlideIntercept:urlString:;
- (id)angelConfig;
- (id)urlWhiteList;
- (void)setAngelConfig:;
- (void)setup;
- (void).cxx_destruct;
+ (void)_aweLazyRegisterStaticLoad;
+ (id)sharedInstance;
@end
