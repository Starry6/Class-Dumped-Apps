@interface AWEFollowGroupResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray systemGroup;
@property (nonatomic) NSArray dynamicGroup;
@property (nonatomic) NSArray customGroup;
- (void)setSystemGroup:;
- (id)dynamicGroup;
- (void)setDynamicGroup:;
- (id)customGroup;
- (void)setCustomGroup:;
- (void).cxx_destruct;
- (id)systemGroup;
+ (id)systemGroupJSONTransformer;
+ (id)customGroupJSONTransformer;
+ (id)dynamicGroupJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
