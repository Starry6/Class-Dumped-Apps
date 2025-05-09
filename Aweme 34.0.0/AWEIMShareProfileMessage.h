@interface AWEIMShareProfileMessage : AWEIMMessage
@property (nonatomic) NSString userDescription;
@property (nonatomic) NSArray coverURLArray;
@property (nonatomic) NSArray coverItemsArray;
@property (nonatomic) NSString uid;
@property (nonatomic) NSString secUID;
@property (nonatomic) AWEIMUser user;
@property (nonatomic) NSString pushDetail;
@property (nonatomic) NSString name;
@property (nonatomic) AWEURLModel avatarURLModel;
@property (nonatomic) NSDictionary ecomShareTrackParams;
@property (nonatomic) NSDictionary lifeShareExt;
@property (nonatomic) NSString source;
@property (nonatomic) NSString signature;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setAvatarURLModel:;
- (id)pushDetail;
- (void)setLifeShareExt:;
- (id)initWithContentDict:;
- (id)contentComponentName;
- (id)lifeShareExt;
- (id)ecomShareTrackParams;
- (void)setEcomShareTrackParams:;
- (id)secUID;
- (void)setSecUID:;
- (id)coverURLArray;
- (void)setCoverURLArray:;
- (void)setPushDetail:;
- (id)avatarURLModel;
- (id)getContentDict;
- (BOOL)isUserCellType;
- (BOOL)supportRefactorCell;
- (id)quoteContentComponentName;
- (id)supportMessageMenuTypeList;
- (BOOL)isAllowedEmojiReply;
- (BOOL)isAllowedCellEdit;
- (BOOL)shouldShowNicknameWithMessageType;
- (BOOL)isSupportForward;
- (id)hintOnInputVCWhenQuoted;
- (BOOL)isAllowedForward;
- (id)coverItemsArray;
- (void)setCoverItemsArray:;
- (id)signature;
- (id)user;
- (void)setUser:;
- (void)setSignature:;
- (void)setUid:;
- (id)uid;
- (void).cxx_destruct;
- (id)source;
- (void)setSource:;
- (void)setName:;
- (id)name;
- (id)copyWithZone:;
- (id)userDescription;
- (void)setUserDescription:;
+ (Class)viewModelClass;
@end
