@interface AWEECOMIMPaasShopInfoModelNew : NSObject
@property (nonatomic) BDECPigeonShopInfoModelV2 shopInfoModel;
@property (nonatomic) NSString shopLogo;
@property (nonatomic) NSString shopName;
@property (nonatomic) NSString shopId;
@property (nonatomic) NSString authorID;
@property (nonatomic) NSString encodedShopId;
@property (nonatomic) NSDictionary extension;
@property (nonatomic) NSString promotionTypeStr;
@property (nonatomic) NSString promotionDesc;
@property (nonatomic) NSString bizServiceEntityID;
@property (nonatomic) NSString pigeonServiceEntityID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)shopLogo;
- (id)shopName;
- (id)shopId;
- (id)encodedShopId;
- (id)promotionTypeStr;
- (id)promotionDesc;
- (void)setShopLogo:;
- (void)setShopName:;
- (void)setShopId:;
- (void)setEncodedShopId:;
- (void)setPromotionTypeStr:;
- (void)setPromotionDesc:;
- (id)bizServiceEntityID;
- (void)setBizServiceEntityID:;
- (id)pigeonServiceEntityID;
- (void)setPigeonServiceEntityID:;
- (id)shopInfoModel;
- (void)setShopInfoModel:;
- (void)setExtension:;
- (id)extension;
- (void).cxx_destruct;
- (id)authorID;
- (void)setAuthorID:;
+ (id)PaasShopInfoModelWithPigeonShopInfoModel:;
@end
