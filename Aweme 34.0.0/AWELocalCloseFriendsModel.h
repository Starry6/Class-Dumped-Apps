@interface AWELocalCloseFriendsModel : AWELocalUserCenterBaseModel
@property (nonatomic) q lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
@property (nonatomic) q closeFriendType;
@property (nonatomic) NSNumber closeTime;
@property (nonatomic) NSNumber revCloseTime;
- (id)closeTime;
- (void)setCloseTime:;
- (id)userPropertyDetail;
- (long long)closeFriendType;
- (id)revCloseTime;
- (void)setCloseFriendType:;
- (void)setRevCloseTime:;
- (void).cxx_destruct;
- (id)targetTable;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)modifyTime;
+ (id)closeTime;
+ (id)objectRelationalMappingForWCDB;
+ (id)AllProperties;
+ (id)AnyProperty;
+ (id)PropertyNamed;
+ (id)closeFriendType;
+ (id)revCloseTime;
+ (id)userID;
+ (id)isDeleted;
+ (id)JSONKeyPathsByPropertyKey;
@end
