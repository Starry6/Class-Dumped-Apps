@interface AWEIMSmartCardMessage : AWEIMLynxContainerBaseMessage
@property (nonatomic) NSString cardID;
@property (nonatomic) NSString templatesString;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithContentDict:;
- (id)contentComponentName;
- (id)getContentDict;
- (BOOL)isUserCellType;
- (BOOL)supportRefactorCell;
- (id)supportMessageMenuTypeList;
- (BOOL)isAllowedCellEdit;
- (BOOL)shouldShowNicknameWithMessageType;
- (id)templatesString;
- (void)setTemplatesString:;
- (void).cxx_destruct;
- (id)cardID;
- (void)setCardID:;
+ (Class)viewModelClass;
@end
