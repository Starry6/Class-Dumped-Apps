@interface AWEIMFormatCharacterCardMessage : AWEIMMessage
@property (nonatomic) NSString nickname;
@property (nonatomic) AWEURLModel avatarUrl;
@property (nonatomic) NSString desc;
@property (nonatomic) NSArray tagsArray;
@property (nonatomic) NSArray tagModelsArray;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)tagsArray;
- (void)setTagsArray:;
- (void)setAvatarUrl:;
- (id)avatarUrl;
- (id)tagModelsArray;
- (void)setTagModelsArray:;
- (id)initWithContentDict:;
- (id)contentComponentName;
- (id)getContentDict;
- (BOOL)isUserCellType;
- (BOOL)supportRefactorCell;
- (id)nickname;
- (long long)templateType;
- (void)setDesc:;
- (id)desc;
- (void).cxx_destruct;
- (void)setNickname:;
@end
