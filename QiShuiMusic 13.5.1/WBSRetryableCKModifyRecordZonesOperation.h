@interface WBSRetryableCKModifyRecordZonesOperation : WBSRetryableCKDatabaseOperation
@property (nonatomic) NSArray recordZonesToSave;
@property (nonatomic) NSArray recordZoneIDsToDelete;
@property (nonatomic) @? perRecordZoneSaveBlock;
@property (nonatomic) @? perRecordZoneDeleteBlock;
@property (nonatomic) @? modifyRecordZonesCompletionBlock;
- (void)setRecordZonesToSave:;
- (void)_setUpOperation:;
- (id)recordZonesToSave;
- (id)recordZoneIDsToDelete;
- (id)_makeOperation;
- (void)setPerRecordZoneSaveBlock:;
- (void)setPerRecordZoneDeleteBlock:;
- (void)setModifyRecordZonesCompletionBlock:;
- (id)perRecordZoneSaveBlock;
- (void)setRecordZoneIDsToDelete:;
- (id)perRecordZoneDeleteBlock;
- (void).cxx_destruct;
- (id)modifyRecordZonesCompletionBlock;
@end
