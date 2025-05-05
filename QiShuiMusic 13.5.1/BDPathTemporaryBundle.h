@interface BDPathTemporaryBundle : BDPathBaseBundle
- (id)initWithRootName:;
- (id)pathWithAutoCreated:;
- (id)pathWithSubPath:;
- (id)pathWithSubPath:autoCreated:;
- (id)pathWithUid:;
- (id)pathWithUid:autoCreated:;
- (id)pathWithUid:subPath:;
- (id)pathWithUid:subPath:autoCreated:;
- (BOOL)registerCleanRuleForAnyUidForSubDirPath:when:;
- (BOOL)registerCleanRuleForSubPath:when:;
- (BOOL)registerCleanRuleForUid:subPath:when:;
- (id)path;
@end
