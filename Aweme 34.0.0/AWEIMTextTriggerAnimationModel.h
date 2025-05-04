@interface AWEIMTextTriggerAnimationModel : MTLModel
@property (nonatomic) BOOL inAdvance;
@property (nonatomic) NSInteger total;
@property (nonatomic) NSArray keyword;
@property (nonatomic) NSArray info;
@property (nonatomic) NSString triggerType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)modelCustomTransformFromDictionary:;
- (BOOL)inAdvance;
- (void)setInAdvance:;
- (void)setInfo:;
- (id)info;
- (void).cxx_destruct;
- (id)triggerType;
- (void)setTriggerType:;
- (int)total;
- (id)keyword;
- (void)setKeyword:;
- (void)setTotal:;
+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)infoJSONTransformer;
+ (id)keywordJSONTransformer;
@end
