@interface AWERelationReasonExtra : AWEBaseApiModel
@property (nonatomic) NSString relationReason;
@property (nonatomic) q relationType;
@property (nonatomic) NSArray userList;
@property (nonatomic) NSNumber commonUserCount;
@property (nonatomic) NSNumber clickDisplayType;
@property (nonatomic) NSString toastText;
- (id)toastText;
- (void)setToastText:;
- (id)userList;
- (void)setUserList:;
- (void)setRelationType:;
- (id)clickDisplayType;
- (void)setClickDisplayType:;
- (id)relationReason;
- (void)setRelationReason:;
- (id)commonUserCount;
- (void)setCommonUserCount:;
- (void).cxx_destruct;
- (long long)relationType;
+ (id)userListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
