@interface AWEConcernGoodsCardMerchantUserInfo : MTLModel
@property (nonatomic) NSString nickName;
@property (nonatomic) AWEURLModel avatar;
@property (nonatomic) NSString userId;
@property (nonatomic) NSString secUid;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)secUid;
- (void)setSecUid:;
- (id)userId;
- (void)setNickName:;
- (void).cxx_destruct;
- (void)setUserId:;
- (id)nickName;
- (id)avatar;
- (void)setAvatar:;
+ (id)userIdJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
