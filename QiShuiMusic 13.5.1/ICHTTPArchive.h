@interface ICHTTPArchive : NSObject
- (id)init;
- (void)_onQueueFlush;
- (void)dealloc;
- (void)archiveRequest:withResponse:responseData:;
- (id)_archiveCreator;
- (id)_archiveForRequest:;
- (void)flush;
- (id)_arrayFromHeaderDictionary:;
- (void).cxx_destruct;
- (id)_archiveForResponse:responseData:;
- (void)_loadExistingArchivePaths;
- (void)_pruneOldArchives;
+ (id)sharedArchive;
@end
