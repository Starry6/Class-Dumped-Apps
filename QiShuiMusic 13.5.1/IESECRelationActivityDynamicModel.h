@interface IESECRelationActivityDynamicModel : MTLModel
@property (nonatomic) NSArray components;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)components;
- (void)setComponents:;
- (void).cxx_destruct;
- (id)initWithComponents:;
+ (id)componentsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
