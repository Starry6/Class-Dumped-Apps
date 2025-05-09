@interface AWELocalFollowModel : AWELocalUserCenterBaseModel
@property (nonatomic) q lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
@property (nonatomic) q followStatus;
@property (nonatomic) q followType;
@property (nonatomic) q forwardTime;
@property (nonatomic) q reverseTime;
- (long long)followStatus;
- (void)setFollowStatus:;
- (void)setForwardTime:;
- (long long)forwardTime;
- (long long)followType;
- (void)setFollowType:;
- (long long)reverseTime;
- (void)setReverseTime:;
- (id)userPropertyDetail;
- (id)targetTable;
- (id)copyWithZone:;
+ (id)followStatus;
+ (id)modifyTime;
+ (id)objectRelationalMappingForWCDB;
+ (id)AllProperties;
+ (id)AnyProperty;
+ (id)PropertyNamed;
+ (id)forwardTime;
+ (id)followType;
+ (id)reverseTime;
+ (id)userID;
+ (id)isDeleted;
+ (id)JSONKeyPathsByPropertyKey;
@end
