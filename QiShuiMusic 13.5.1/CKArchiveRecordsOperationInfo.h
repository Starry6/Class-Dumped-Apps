@interface CKArchiveRecordsOperationInfo : CKDatabaseOperationInfo
@property (nonatomic) NSArray recordIDs;
- (void)setRecordIDs:;
- (id)recordIDs;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
+ (BOOL)supportsSecureCoding;
@end
