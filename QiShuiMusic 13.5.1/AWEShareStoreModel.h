@interface AWEShareStoreModel : NSObject
@property (nonatomic) NSString shopId;
@property (nonatomic) NSString secShopId;
@property (nonatomic) NSString shopName;
@property (nonatomic) IESIMURLModel avatarMedium;
- (id)avatarMedium;
- (id)secShopId;
- (void)setAvatarMedium:;
- (void)setSecShopId:;
- (void)setShopId:;
- (void)setShopName:;
- (id)shopId;
- (id)shopName;
- (void).cxx_destruct;
- (id)copyWithZone:;
@end
