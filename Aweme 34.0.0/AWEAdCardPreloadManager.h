@interface AWEAdCardPreloadManager : NSObject
@property (nonatomic) <AWEWebViewConfigProtocol> webConfig;
@property (nonatomic) AWEAdCardPreloadInterceptor interceptor;
@property (nonatomic) NSString eventName;
@property (nonatomic) NSString accessKey;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)gurdWillDownloadPackageForAccessKey:channel:isPatch:;
- (void)gurdDidFinishDownloadingPackageForAccessKey:channel:packageInfo:;
- (void)gurdDidFinishApplyingPackageForAccessKey:channel:succeed:error:;
- (void)setInterceptor:;
- (id)interceptor;
- (id)webConfig;
- (BOOL)isAdCardChannel:accessKey:;
- (long long)commonResourceStatus:;
- (void)setupAdCardGurdForWebViewIfNeeded;
- (void)preloadAdCardWithModelIfNeeded:;
- (BOOL)isPreloadResourceActived:;
- (void)setWebConfig:;
- (void)setEventName:;
- (void).cxx_destruct;
- (id)eventName;
- (id)accessKey;
- (void)setAccessKey:;
+ (id)sharedInstance;
@end
