@interface ML3ProtoSyncImportOperation : ML3ImportOperation
- (void)cancel;
- (void)main;
- (void).cxx_destruct;
- (unsigned long long)importSource;
- (id)initWithDatabaseImport:;
- (BOOL)_performImportWithTransaction:;
- (BOOL)_processSyncPackage:withImportSession:;
- (BOOL)_processSyncHeader:;
- (BOOL)_processSyncError:;
- (BOOL)_processSyncOperation:withImportSession:;
- (BOOL)_processMediaItemOperation:withImportSession:;
- (BOOL)_processPlaylistOperation:withImportSession:;
- (void)_unlinkUnavailableMediaItems;
@end
