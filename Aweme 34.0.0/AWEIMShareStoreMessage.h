@interface AWEIMShareStoreMessage : AWEIMMessage
@property (nonatomic) NSString shopDescription;
@property (nonatomic) NSString secShopID;
@property (nonatomic) NSString pushDetail;
@property (nonatomic) NSString name;
@property (nonatomic) NSDictionary ecomShareTrackParams;
@property (nonatomic) AWEURLModel avatarURLModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setAvatarURLModel:;
- (id)pushDetail;
- (id)initWithContentDict:;
- (id)contentComponentName;
- (id)ecomShareTrackParams;
- (void)setEcomShareTrackParams:;
- (id)secShopID;
- (void)setSecShopID:;
- (void)setPushDetail:;
- (id)avatarURLModel;
- (id)getContentDict;
- (BOOL)isUserCellType;
- (BOOL)supportRefactorCell;
- (id)supportMessageMenuTypeList;
- (BOOL)isAllowedCellEdit;
- (BOOL)shouldShowNicknameWithMessageType;
- (BOOL)isSupportForward;
- (BOOL)isAllowedForward;
- (id)shopDescription;
- (void)setShopDescription:;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
- (id)copyWithZone:;
+ (Class)viewModelClass;
@end
