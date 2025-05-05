@interface CKModifyWebSharingOperationInfo : CKDatabaseOperationInfo
@property (nonatomic) NSArray recordIDsToShare;
@property (nonatomic) NSArray recordIDsToUnshare;
@property (nonatomic) NSArray recordIDsToShareReadWrite;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)recordIDsToShareReadWrite;
- (void)setRecordIDsToShareReadWrite:;
- (id)recordIDsToShare;
- (void)setRecordIDsToShare:;
- (id)recordIDsToUnshare;
- (void)setRecordIDsToUnshare:;
+ (BOOL)supportsSecureCoding;
@end
