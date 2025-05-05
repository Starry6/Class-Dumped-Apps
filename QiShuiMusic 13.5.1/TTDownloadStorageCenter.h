@interface TTDownloadStorageCenter : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)deleteClearCacheRule:error:;
- (BOOL)deleteDownloadTaskConfigSync:error:;
- (BOOL)deleteDownloadTrackModelSync:error:;
- (BOOL)deleteDownloadTrackModelWithUrlMd5Sync:error:;
- (BOOL)deleteSubSliceInfo:error:;
- (id)getAllClearCacheRule:;
- (id)initWithDownloadStorageImplType:;
- (BOOL)insertDownloadTaskConfigSync:error:;
- (BOOL)insertDownloadTrackModelSync:error:;
- (BOOL)insertOrUpdateClearCacheRule:error:;
- (BOOL)insertOrUpdateSubSliceInfo:error:;
- (BOOL)queryAllDownloadTaskConfigSync:isTriggerClean:error:;
- (BOOL)queryAllDownloadTrackModelSync:error:;
- (BOOL)queryDownloadTaskConfigWithUrlSync:downloadTaskResultBlock:error:;
- (BOOL)queryDownloadTrackModelWithUrlMd5Sync:downloadTrackResultBlock:error:;
- (BOOL)updateDownloadTaskConfigSync:error:;
- (BOOL)updateDownloadTrackModelSync:error:;
- (BOOL)updateExtendConfigSync:error:;
- (BOOL)updateParametersTable:error:;
- (BOOL)updateSliceConfig:sliceConfig:error:;
- (void).cxx_destruct;
@end
