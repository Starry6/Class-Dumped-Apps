@interface AWEAdChallengeShopModel : MTLModel
@property (nonatomic) NSString shopID;
@property (nonatomic) NSString shopName;
@property (nonatomic) NSString shopSchema;
@property (nonatomic) NSString shopCoverPhoto;
@property (nonatomic) NSString shopLogo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setShopID:;
- (id)shopID;
- (id)shopLogo;
- (id)shopName;
- (void)setShopLogo:;
- (void)setShopName:;
- (id)shopSchema;
- (void)setShopSchema:;
- (id)shopCoverPhoto;
- (void)setShopCoverPhoto:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
