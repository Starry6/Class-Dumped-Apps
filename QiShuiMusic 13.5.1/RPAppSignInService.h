@interface RPAppSignInService : NSObject
@property (nonatomic) NSString appName;
@property (nonatomic) NSString appBundleID;
@property (nonatomic) NSArray associatedDomains;
@property (nonatomic) NSObject<OS_dispatch_queue> dispatchQueue;
@property (nonatomic) I flags;
- (id)appBundleID;
- (id)init;
- (id)associatedDomains;
- (void)_invalidated;
- (id)dispatchQueue;
- (void)setAppBundleID:;
- (void)setDispatchQueue:;
- (void)setAppName:;
- (id)appName;
- (void)_invalidate;
- (void)_activate;
- (void).cxx_destruct;
- (id)description;
- (void)setFlags:;
- (unsigned int)flags;
- (void)setAssociatedDomains:;
- (void)invalidate;
- (void)activate;
@end
