@interface AWENetworkSetUp : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)aAWENetworkFilterDOUYINLiteAdapter;
- (id)aAWENetworkSetupCommonAdapter;
+ (id)current_x_tt_token;
+ (void)setupNetWork;
+ (void)syncPassportUID:;
+ (void)resetTTNetworkThreadPriorityIfNeeded;
+ (void)preConnectUrlAfterFeedReady;
+ (Class)aAWENetworkSetupCommonAdapterClass;
+ (void)setupTTNetworkHttpCacheConfig;
+ (void)setupNetworkRequestFilter;
+ (void)setupNetworkResponseFilter;
+ (id)opaqueDataArray;
+ (void)setupCommonPushManager;
+ (void)setupTTNetworkDownloader;
+ (void)setupTTNetPrivacyLevel;
+ (void)beforeNetworkStart;
+ (void)clearHttpCacheIfNeeded;
+ (id)requestTimeOutConfig;
+ (Class)aAWENetworkFilterDOUYINLiteAdapterClass;
+ (void)trafficConsumeWithRequest:response:body:;
@end
