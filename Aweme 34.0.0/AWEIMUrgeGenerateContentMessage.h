@interface AWEIMUrgeGenerateContentMessage : AWEIMTextMessage
@property (nonatomic) q urgeIndex;
@property (nonatomic) NSString indexText;
@property (nonatomic) NSString urgeCycleId;
@property (nonatomic) {CGSize=dd} urgeSceneDescSize;
@property (nonatomic) BOOL isFromGroupOwner;
- (id)initWithContentDict:;
- (id)getContentDict;
- (BOOL)isUserCellType;
- (id)supportMessageMenuTypeList;
- (BOOL)isAllowedCellEdit;
- (BOOL)shouldShowNicknameWithMessageType;
- (id)indexText;
- (id)urgeCycleId;
- (long long)urgeIndex;
- (BOOL)isFromGroupOwner;
- (void)setUrgeIndex:;
- (void)setIndexText:;
- (void)setUrgeCycleId:;
- (id)urgeSceneDescSize;
- (void)setUrgeSceneDescSize:;
- (void)setIsFromGroupOwner:;
- (void).cxx_destruct;
+ (Class)viewModelClass;
@end
