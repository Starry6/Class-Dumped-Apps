@interface FBSMutableSceneParameters : FBSSceneParameters
@property (nonatomic) FBSSceneSpecification specification;
@property (nonatomic) FBSSceneSettings settings;
@property (nonatomic) FBSSceneClientSettings clientSettings;
- (void)updateSettingsWithBlock:;
- (void)updateClientSettingsWithBlock:;
- (void)setDisplay:;
- (void)setSettings:;
- (void)_setSpecification:;
- (void).cxx_destruct;
- (void)applyParameters:;
- (id)copyWithZone:;
@end
