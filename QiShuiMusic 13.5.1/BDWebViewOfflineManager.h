@interface BDWebViewOfflineManager : NSObject
@property (nonatomic) NSMutableArray customUrlProtocols;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)customUrlProtocols;
- (id)falconMetaDataForURLRequest:;
- (void)setCustomUrlProtocols:;
- (id)init;
- (void).cxx_destruct;
+ (BOOL)interceptionEnable;
+ (void)registerCustomInterceptor:;
+ (void)registerCustomInterceptorList:;
+ (void)setInterceptionEnable:;
+ (void)unregisterCustomInterceptor:;
+ (void)unregisterCustomInterceptorList:;
+ (id)sharedInstance;
@end
