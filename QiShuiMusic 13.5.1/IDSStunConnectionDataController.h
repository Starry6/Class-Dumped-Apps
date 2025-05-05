@interface IDSStunConnectionDataController : NSObject
- (void).cxx_destruct;
- (id)dataFromCandidates:token:remoteDeviceVersion:;
- (id)candidatesFromData:token:;
- (unsigned long long)deliveryStatus:;
- (void)setDeliveryStatus:status:;
- (void)removeData:;
+ (id)sharedInstance;
@end
