@interface BDPathLibraryBundle : BDPathBaseBundle
- (long long)anyUidFilesSizeWithSubDirPath:;
- (long long)cleanupAnyUidFileWithSubFilePath:excludeUids:;
- (long long)cleanupAnyUidFilesWithSubDirPath:excludeUids:;
- (long long)cleanupUid:subDirPath:retureSize:;
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
- (BOOL)registerCleanRuleForUid:subDirPath:when:;
- (id)path;
@end
