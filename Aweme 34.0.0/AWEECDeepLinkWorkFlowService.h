@interface AWEECDeepLinkWorkFlowService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)handleCFShortLink:perfTiming:;
- (void)handleEcMallPreLoadTask:perfTiming:;
- (void)handleTabKitPreLoadTask:perfTiming:strategy:;
- (void)notifyPreLoadTaskExecute:;
+ (BOOL)enableDeepLinkPrefetch;
+ (id)sharedInstance;
@end
