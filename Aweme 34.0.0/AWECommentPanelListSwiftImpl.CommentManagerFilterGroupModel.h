@interface AWECommentPanelListSwiftImpl.CommentManagerFilterGroupModel : AWEBaseApiModel
@property (nonatomic) NSString groupName;
@property (nonatomic) NSString groupType;
@property (nonatomic) BOOL selected;
@property (nonatomic) NSString selectedOptionType;
@property (nonatomic) NSArray items;
- (id)selectedOptionType;
- (void)setSelectedOptionType:;
- (unsigned long long)getSortType:;
- (id)getSortFilterType:;
- (void)updateSelectedOption:;
- (void)setGroupName:;
- (void)setGroupType:;
- (id)initWithDictionary:error:;
- (id)groupType;
- (id)init;
- (id)items;
- (void)setItems:;
- (id)groupName;
- (void).cxx_destruct;
- (BOOL)selected;
- (void)setSelected:;
- (id)initWithCoder:;
+ (id)itemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
