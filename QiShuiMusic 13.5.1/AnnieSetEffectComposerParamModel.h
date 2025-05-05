@interface AnnieSetEffectComposerParamModel : IESLiveBridgeModel
@property (nonatomic) NSArray nodePaths;
@property (nonatomic) NSArray tags;
@property (nonatomic) NSString name;
- (id)nodePaths;
- (void)setNodePaths:;
- (id)tags;
- (void)setTags:;
- (void)setName:;
- (void).cxx_destruct;
- (id)name;
+ (id)modelCustomPropertyMapper;
@end
