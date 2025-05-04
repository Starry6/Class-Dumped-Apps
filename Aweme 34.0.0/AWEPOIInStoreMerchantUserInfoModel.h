@interface AWEPOIInStoreMerchantUserInfoModel : MTLModel
@property (nonatomic) NSString nickName;
@property (nonatomic) NSString desc;
@property (nonatomic) AWEPOIInStoreAvatarModel avatar;
@property (nonatomic) q userId;
@property (nonatomic) NSString secUid;
@property (nonatomic) q merchantId;
@property (nonatomic) BOOL isFollow;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)secUid;
- (void)setSecUid:;
- (BOOL)isFollow;
- (void)setIsFollow:;
- (long long)userId;
- (void)setDesc:;
- (id)desc;
- (void)setNickName:;
- (void).cxx_destruct;
- (void)setUserId:;
- (id)nickName;
- (long long)merchantId;
- (void)setMerchantId:;
- (id)avatar;
- (void)setAvatar:;
+ (id)JSONKeyPathsByPropertyKey;
@end
