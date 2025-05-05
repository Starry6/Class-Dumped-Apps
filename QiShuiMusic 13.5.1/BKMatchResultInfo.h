@interface BKMatchResultInfo : NSObject
@property (nonatomic) BKIdentity identity;
@property (nonatomic) q lockoutState;
@property (nonatomic) BOOL unlocked;
@property (nonatomic) BOOL credentialAdded;
@property (nonatomic) BOOL resultIgnored;
- (void)setIdentity:;
- (id)identity;
- (BOOL)unlocked;
- (void)setUnlocked:;
- (long long)lockoutState;
- (void).cxx_destruct;
- (id)initWithServerIdentity:details:device:;
- (void)setLockoutState:;
- (BOOL)credentialAdded;
- (void)setCredentialAdded:;
- (BOOL)resultIgnored;
@end
