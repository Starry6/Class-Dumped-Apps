@interface IESMergeCategoryEffectsResponse : MTLModel
@property (nonatomic) IESCategoryEffectsModel categoryEffects;
@property (nonatomic) NSArray urlPrefix;
@property (nonatomic) NSString recId;
@property (nonatomic) NSMutableDictionary effectsMap;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)categoryEffects;
- (id)effectsMap;
- (void)preProcessEffects;
- (id)recId;
- (void).cxx_destruct;
- (void)setPanelName:;
- (id)urlPrefix;
+ (id)JSONKeyPathsByPropertyKey;
@end
