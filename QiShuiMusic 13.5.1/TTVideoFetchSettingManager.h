@interface TTVideoFetchSettingManager : NSObject
@property (nonatomic) NSDictionary uriParameter;
@property (nonatomic) BOOL debug;
- (void)dealNetworkCallBack:withError:;
- (void)fetchSettingInfoIfNeeded;
- (void)fetchSettingInfoisForce:;
- (void)loadFetchConfig:;
- (void)setUriParameter:;
- (void)startFetchSettingInfo;
- (id)uriParameter;
- (id)init;
- (void)setDebug:;
- (BOOL)debug;
- (void)applicationWillEnterForeground;
- (void).cxx_destruct;
- (void)setIsDebug:;
+ (id)shareInstance;
@end
