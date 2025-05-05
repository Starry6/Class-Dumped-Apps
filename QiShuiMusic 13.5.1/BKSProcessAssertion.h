@interface BKSProcessAssertion : BKSAssertion
@property (nonatomic) I flags;
@property (nonatomic) I reason;
- (void)assertion:didInvalidateWithError:;
- (void)dealloc;
- (BOOL)acquire;
- (id)initWithBundleIdentifier:flags:reason:name:withHandler:acquire:;
- (unsigned long long)_legacyFlagsForFlags:;
- (id)initWithBundleIdentifier:flags:reason:name:;
- (unsigned int)reason;
- (unsigned long long)_legacyReasonForReason:;
- (void).cxx_destruct;
- (id)initWithBundleIdentifier:flags:reason:name:withHandler:;
- (id)initWithPID:flags:reason:name:withHandler:acquire:;
- (void)setFlags:;
- (id)initWithBundleIdentifier:pid:flags:reason:name:withHandler:acquire:;
- (unsigned int)flags;
- (void)invalidate;
- (id)initWithPID:flags:reason:name:;
- (id)initWithPID:flags:reason:name:withHandler:;
+ (id)NameForReason:;
@end
