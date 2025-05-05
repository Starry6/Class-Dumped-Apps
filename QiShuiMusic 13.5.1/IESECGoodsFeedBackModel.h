@interface IESECGoodsFeedBackModel : MTLModel
@property (nonatomic) NSString title;
@property (nonatomic) NSArray feedBackGroups;
@property (nonatomic) NSDictionary extra;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)feedBackGroups;
- (void)setExtra:;
- (void)setFeedBackGroups:;
- (id)extra;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
+ (id)feedBackGroupsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
