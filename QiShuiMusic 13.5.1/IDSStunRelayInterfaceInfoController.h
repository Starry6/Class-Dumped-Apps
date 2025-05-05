@interface IDSStunRelayInterfaceInfoController : NSObject
- (void).cxx_destruct;
- (id)createRelayInterfaceInfoFromCandidatePairs:token:;
- (id)candidatePairsFromRelayInterfaceInfo:bufferLength:token:sessionID:error:;
- (unsigned long long)relayInterfaceInfoDeliveryStatus:;
- (void)setRelayInterfaceInfoDeliveryStatus:status:;
- (void)removeCache:;
+ (id)sharedInstance;
@end
