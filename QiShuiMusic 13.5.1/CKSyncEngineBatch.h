@interface CKSyncEngineBatch : NSObject
@property (nonatomic) NSArray savedRecords;
@property (nonatomic) NSArray deletedRecordIDs;
@property (nonatomic) NSArray recordsToSave;
@property (nonatomic) NSArray recordIDsToDelete;
@property (nonatomic) BOOL atomic;
- (void)setDeletedRecordIDs:;
- (id)savedRecords;
- (id)deletedRecordIDs;
- (id)initWithRecordsToSave:recordIDsToDelete:;
- (id)recordsToSave;
- (void)setSavedRecords:;
- (id)recordIDsToDelete;
- (void)setAtomic:;
- (id)CKDescriptionPropertiesWithPublic:private:shouldExpand:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isAtomic;
@end
