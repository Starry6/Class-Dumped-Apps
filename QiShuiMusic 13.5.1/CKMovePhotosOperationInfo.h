@interface CKMovePhotosOperationInfo : CKModifyRecordsOperationInfo
@property (nonatomic) NSArray moveChanges;
@property (nonatomic) q sourceDatabaseScope;
- (id)moveChanges;
- (void)setMoveChanges:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setSourceDatabaseScope:;
- (void).cxx_destruct;
- (long long)sourceDatabaseScope;
+ (BOOL)supportsSecureCoding;
@end
