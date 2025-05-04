@interface AWECommentPanelListSwiftImpl.CommentManagerConfigs : AWEBaseApiModel
@property (nonatomic) NSArray groupData;
- (id)initWithDictionary:error:;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (id)groupData;
- (void)setGroupData:;
+ (id)groupDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
