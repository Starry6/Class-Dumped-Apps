@interface AWECommentPanelListSwiftImpl.CommentManagerFilterBarModel : AWEBaseApiModel
@property (nonatomic) NSArray filterGroups;
- (id)filterGroups;
- (void)setFilterGroups:;
- (id)initWithDictionary:error:;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:;
+ (id)filterGroupsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
