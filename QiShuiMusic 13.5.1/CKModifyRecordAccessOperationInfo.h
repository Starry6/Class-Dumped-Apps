@interface CKModifyRecordAccessOperationInfo : CKDatabaseOperationInfo
@property (nonatomic) NSArray recordIDsToGrant;
@property (nonatomic) NSArray recordIDsToRevoke;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)recordIDsToGrant;
- (void)setRecordIDsToGrant:;
- (id)recordIDsToRevoke;
- (void)setRecordIDsToRevoke:;
+ (BOOL)supportsSecureCoding;
@end
