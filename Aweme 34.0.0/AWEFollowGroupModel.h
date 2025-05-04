@interface AWEFollowGroupModel : MTLModel
@property (nonatomic) NSNumber groupID;
@property (nonatomic) NSString name;
@property (nonatomic) NSString desc;
@property (nonatomic) q memberCount;
@property (nonatomic) NSArray userList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)userList;
- (void)setMemberCount:;
- (void)setUserList:;
- (void)setGroupID:;
- (id)groupID;
- (long long)memberCount;
- (void)setDesc:;
- (id)desc;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
+ (id)userListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
