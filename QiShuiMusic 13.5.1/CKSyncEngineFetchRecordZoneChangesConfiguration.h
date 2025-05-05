@interface CKSyncEngineFetchRecordZoneChangesConfiguration : NSObject
@property (nonatomic) CKFetchRecordZoneChangesConfiguration configuration;
@property (nonatomic) BOOL shouldFetchAssetContents;
- (BOOL)shouldFetchAssetContents;
- (id)init;
- (void)setShouldFetchAssetContents:;
- (void)setConfiguration:;
- (id)configuration;
- (void).cxx_destruct;
@end
