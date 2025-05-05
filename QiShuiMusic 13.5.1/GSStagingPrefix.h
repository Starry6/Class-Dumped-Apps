@interface GSStagingPrefix : NSObject
- (id)init;
- (void)dealloc;
- (unsigned long long)hash;
- (void)finalize;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (void)_invalidate:;
- (id)initWithDocumentID:;
- (BOOL)_refreshWithError:;
- (void)_connectionWithDaemonWasLost;
- (id)stagingPathforCreatingAdditionWithError:;
- (BOOL)isStagedPath:;
- (void)cleanupStagingPath:;
@end
