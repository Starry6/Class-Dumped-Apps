@interface AWEIMShareStoreMessage : AWEIMMessage
@property (nonatomic) NSString shopDescription;
@property (nonatomic) NSString secShopID;
@property (nonatomic) NSString pushDetail;
@property (nonatomic) NSString name;
@property (nonatomic) IESIMURLModel avatarURLModel;
- (id)shopDescription;
- (id)avatarURLModel;
- (id)getContentDict;
- (id)initWithContentDict:;
- (id)pushDetail;
- (id)secShopID;
- (void)setAvatarURLModel:;
- (void)setPushDetail:;
- (void)setSecShopID:;
- (void)setShopDescription:;
- (void)setName:;
- (void).cxx_destruct;
- (id)name;
- (id)copyWithZone:;
@end
