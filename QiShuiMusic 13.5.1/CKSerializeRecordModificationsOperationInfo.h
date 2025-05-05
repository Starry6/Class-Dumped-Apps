@interface CKSerializeRecordModificationsOperationInfo : CKDatabaseOperationInfo
@property (nonatomic) NSArray recordsToSave;
@property (nonatomic) NSArray recordIDsToDelete;
- (void)setRecordIDsToDelete:;
- (id)recordsToSave;
- (id)init;
- (id)recordIDsToDelete;
- (void)setRecordsToSave:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
+ (BOOL)supportsSecureCoding;
@end
