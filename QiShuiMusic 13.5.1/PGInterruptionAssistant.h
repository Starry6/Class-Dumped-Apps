@interface PGInterruptionAssistant : NSObject
@property (nonatomic) BOOL interrupted;
@property (nonatomic) BOOL proxyActive;
@property (nonatomic) BOOL exemptFromUILockInterruptionsWhenActive;
@property (nonatomic) BOOL allowsResumingAfterInterruptionEnds;
- (id)init;
- (void)dealloc;
- (id)cameraInterruptionAttributions;
- (void)setExemptAttribution:;
- (BOOL)_lock_calculateIsInterrupted;
- (void)noteDidNotifyProxyOfInterruptionBegan;
- (BOOL)isInterrupted;
- (void)setExemptFromUILockInterruptionsWhenActive:;
- (BOOL)shouldNotifyProxyOfInterruptionBegan;
- (void)setProxyActive:;
- (BOOL)isExemptFromUILockInterruptionsWhenActive;
- (BOOL)isProxyActive;
- (id)copyWithExemptAttribution:;
- (void).cxx_destruct;
- (BOOL)allowsResumingAfterInterruptionEnds;
- (void)addReason:attribution:;
- (id)description;
- (BOOL)hasInterruptionReason:;
- (id)_interruptionsDescription;
- (BOOL)shouldNotifyProxyOfInterruptionEnded;
- (id)exemptAttribution;
- (void)noteDidNotifyProxyOfInterruptionEnded;
- (void)removeReason:attribution:;
@end
