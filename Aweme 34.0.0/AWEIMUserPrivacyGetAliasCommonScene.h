@interface AWEIMUserPrivacyGetAliasCommonScene : NSObject
@property (nonatomic) Q commonSceneValue;
@property (nonatomic) Q aliasScene;
- (id)initWithLocalScene:;
- (unsigned long long)__commonSceneEnumFromScene:;
- (BOOL)__banedInSetting;
- (unsigned long long)commonSceneValue;
- (unsigned long long)aliasScene;
- (void)setAliasScene:;
- (void)setCommonSceneValue:;
- (id)displayOrder;
- (BOOL)shouldShow;
- (BOOL)shouldTrack;
- (id)trackName;
+ (id)__commonSceneTrackWhiteList;
+ (id)__commonSceneValueToNameDictionary;
+ (id)__privacyConfigMap;
+ (id)__commonSceneShowBlackList;
+ (id)__sceneToCommonSceneDictionary;
@end
