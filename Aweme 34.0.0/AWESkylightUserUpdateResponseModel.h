@interface AWESkylightUserUpdateResponseModel : AWEBaseApiModel
@property (nonatomic) BOOL noUpdate;
@property (nonatomic) q updateUserCount;
@property (nonatomic) q updateItemCount;
@property (nonatomic) NSArray userList;
@property (nonatomic) NSArray highValueUserList;
@property (nonatomic) q activeLevel;
@property (nonatomic) BOOL specialFollow;
- (id)userList;
- (BOOL)noUpdate;
- (void)setNoUpdate:;
- (void)setUserList:;
- (long long)updateItemCount;
- (long long)updateUserCount;
- (BOOL)specialFollow;
- (void)setHighValueUserList:;
- (id)highValueUserList;
- (BOOL)isSameModelForRefreshWithOtherModel:;
- (long long)activeLevel;
- (void)setUpdateUserCount:;
- (void)setUpdateItemCount:;
- (BOOL)isSameUserList:otherUserList:;
- (void)setActiveLevel:;
- (void)setSpecialFollow:;
- (void).cxx_destruct;
+ (id)userListJSONTransformer;
+ (id)highValueUserListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
