@interface AWEECPhotoSearchLynxPreloadConfig : MTLModel
@property (nonatomic) NSArray cardConfigs;
@property (nonatomic) NSArray sceneConfigs;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cardConfigs;
- (void)setCardConfigs:;
- (id)sceneConfigs;
- (void)setSceneConfigs:;
- (void).cxx_destruct;
+ (id)cardConfigsJSONTransformer;
+ (id)sceneConfigsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
