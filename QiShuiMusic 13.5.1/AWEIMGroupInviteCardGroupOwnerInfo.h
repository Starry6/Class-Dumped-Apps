@interface AWEIMGroupInviteCardGroupOwnerInfo : MTLModel
@property (nonatomic) NSString name;
@property (nonatomic) NSString avatar;
@property (nonatomic) q uid;
@property (nonatomic) NSString secUid;
@property (nonatomic) NSString ownerOpenId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setOwnerOpenId:;
- (id)ownerOpenId;
- (id)secUid;
- (void)setSecUid:;
- (void)setName:;
- (long long)uid;
- (void)setUid:;
- (void).cxx_destruct;
- (id)name;
- (id)avatar;
- (void)setAvatar:;
+ (id)JSONKeyPathsByPropertyKey;
@end
