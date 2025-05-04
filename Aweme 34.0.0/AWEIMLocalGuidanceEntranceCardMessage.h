@interface AWEIMLocalGuidanceEntranceCardMessage : AWEIMMessage
@property (nonatomic) NSString title;
@property (nonatomic) NSString subTitle;
@property (nonatomic) q groupCount;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithContentDict:;
- (id)contentComponentName;
- (BOOL)shouldHideWithCon:;
- (void)updateTitle:subTitle:groupCount:;
- (id)getContentDict;
- (BOOL)isUserCellType;
- (BOOL)supportRefactorCell;
- (id)__displayInfo;
- (void)setSubTitle:;
- (long long)templateType;
- (id)subTitle;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (long long)groupCount;
- (void)setGroupCount:;
@end
