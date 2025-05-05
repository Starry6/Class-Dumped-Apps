@interface HTSLiveSaaSPushStreamLifeCycleImp_Douyin : NSObject
@property (nonatomic) HTSLiveSaaSRealPushStreamImp_Douyin streamProvider;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)attachingDIContext;
- (void)cleanupPushStreamProvider;
- (void)loadInteractStreamingClientIfNeeded;
- (void)loadPushStreamProviderWith:entryConfig:;
- (void)loadRealPushStreamProviderWithContentType:entryConfig:;
- (id)streamProvider;
- (void)setStreamProvider:;
- (void).cxx_destruct;
+ (void)ieslivekit_xstone_binding_template;
@end
