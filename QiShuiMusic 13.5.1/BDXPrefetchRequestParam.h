@interface BDXPrefetchRequestParam : MTLModel
@property (nonatomic) Q type;
@property (nonatomic) @ value;
@property (nonatomic) NSNumber required;
@property (nonatomic) BOOL enableAppIdIsolation;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)enableAppIdIsolation;
- (void)setEnableAppIdIsolation:;
- (void)setRequired:;
- (void)setType:;
- (void)setValue:;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)required;
- (id)value;
+ (id)typeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
