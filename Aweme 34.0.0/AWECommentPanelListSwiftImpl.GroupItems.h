@interface AWECommentPanelListSwiftImpl.GroupItems : AWEBaseApiModel
@property (nonatomic) NSString groupName;
@property (nonatomic) NSArray groupItem;
- (void)setGroupName:;
- (id)initWithDictionary:error:;
- (id)init;
- (id)groupName;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (id)groupItem;
- (void)setGroupItem:;
+ (id)groupItemJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
