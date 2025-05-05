@interface AXPidSuspensionInfo : NSObject
- (id)init;
- (void).cxx_destruct;
- (id)timeoutProbationPidsForDisplay:;
- (id)suspendedPidsForDisplay:;
- (id)associatedRemotePidCacheForDisplay:;
- (id)tentativeSuspendedPidsForDisplay:;
- (id)associatedRemotePidsForDisplay:;
+ (id)shared;
@end
