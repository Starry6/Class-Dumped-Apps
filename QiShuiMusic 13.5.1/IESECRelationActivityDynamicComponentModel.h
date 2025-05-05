@interface IESECRelationActivityDynamicComponentModel : MTLModel
@property (nonatomic) NSString name;
@property (nonatomic) NSString data;
@property (nonatomic) NSString moduleUrl;
@property (nonatomic) Q containerType;
@property (nonatomic) NSArray rules;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)moduleUrl;
- (void)setModuleUrl:;
- (void)setName:;
- (id)data;
- (id)rules;
- (void)setRules:;
- (void).cxx_destruct;
- (void)setData:;
- (id)name;
- (unsigned long long)containerType;
- (void)setContainerType:;
+ (id)rulesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
