@interface AWEHitNoticeStarListResponse : IESIMBaseApiModel
@property (nonatomic) NSArray userList;
- (void)setUserList:;
- (void).cxx_destruct;
- (id)userList;
+ (id)userListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
