@interface PFUbiquitySwitchboardCacheWrapper : NSObject
- (id)init;
- (void)dealloc;
- (void)_appWillResignActive:;
- (id)initWithStoreName:privateStore:forLocalPeerID:andUbiquityRootLocation:;
@end
