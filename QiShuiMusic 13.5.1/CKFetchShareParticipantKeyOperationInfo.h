@interface CKFetchShareParticipantKeyOperationInfo : CKDatabaseOperationInfo
@property (nonatomic) NSDictionary baseTokensByShareID;
@property (nonatomic) NSDictionary childRecordIDsByShareID;
@property (nonatomic) NSArray shareIDs;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)baseTokensByShareID;
- (void)setBaseTokensByShareID:;
- (id)childRecordIDsByShareID;
- (void)setChildRecordIDsByShareID:;
- (id)shareIDs;
- (void)setShareIDs:;
+ (BOOL)supportsSecureCoding;
@end
