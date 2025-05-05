@interface GEOWiFiQualityServiceManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)cancelRequestId:;
- (void)submitWiFiQualityServiceRequest:requestId:auditToken:completionQueue:completion:;
- (void)submitWiFiQualityTileLoadForKey:eTag:requestId:auditToken:completionQueue:completion:;
- (void).cxx_destruct;
+ (id)sharedManager;
+ (void)useProxyClass:;
@end
