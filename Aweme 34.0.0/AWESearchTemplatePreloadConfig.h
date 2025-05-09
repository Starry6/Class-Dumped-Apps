@interface AWESearchTemplatePreloadConfig : MTLModel
@property (nonatomic) NSArray intermediate;
@property (nonatomic) NSArray mix;
@property (nonatomic) NSArray user;
@property (nonatomic) NSArray music;
@property (nonatomic) NSArray poi;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)poi;
- (void)setPoi:;
- (void)setMix:;
- (id)mix;
- (id)user;
- (void)setUser:;
- (id)music;
- (id)intermediate;
- (void)setMusic:;
- (void).cxx_destruct;
- (void)setIntermediate:;
+ (id)userJSONTransformer;
+ (id)musicJSONTransformer;
+ (id)poiJSONTransformer;
+ (id)currentSearchTemplatePreloadConfig;
+ (id)preloadModelsWithType:;
+ (id)intermediateJSONTransformer;
+ (id)mixJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
