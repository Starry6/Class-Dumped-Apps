@interface GEOWiFiQualityServiceRemoteProxy : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cancelRequestId:;
- (void)submitWiFiQualityServiceRequest:requestId:auditToken:completionQueue:completion:;
- (void)submitWiFiQualityTileLoadForKey:eTag:requestId:auditToken:completionQueue:completion:;
@end
