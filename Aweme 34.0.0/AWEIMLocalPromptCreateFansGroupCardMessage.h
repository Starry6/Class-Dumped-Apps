@interface AWEIMLocalPromptCreateFansGroupCardMessage : AWEIMMessage
@property (nonatomic) NSString title;
@property (nonatomic) NSString subTitle;
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
- (void)setSubTitle:;
- (long long)templateType;
- (id)subTitle;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
@end
