@interface AWEUndertakeTriggeredStrategyModel : MTLModel
@property (nonatomic) NSString strategyID;
@property (nonatomic) AWEUndertakeDataModel undertakeData;
@property (nonatomic) NSArray avoidVideoTypes;
@property (nonatomic) NSArray allowedSceneList;
@property (nonatomic) NSArray avoidEnvironment;
@property (nonatomic) NSDictionary extraData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setStrategyID:;
- (id)strategyID;
- (id)undertakeData;
- (id)avoidEnvironment;
- (id)avoidVideoTypes;
- (id)allowedSceneList;
- (void)setUndertakeData:;
- (void)setAvoidVideoTypes:;
- (void)setAllowedSceneList:;
- (void)setAvoidEnvironment:;
- (void).cxx_destruct;
- (id)extraData;
- (void)setExtraData:;
+ (id)JSONTransformerForKey:;
+ (id)JSONKeyPathsByPropertyKey;
@end
