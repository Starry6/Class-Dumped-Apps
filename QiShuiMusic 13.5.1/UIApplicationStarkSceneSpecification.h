@interface UIApplicationStarkSceneSpecification : UIApplicationSceneSpecification
- (id)uiSceneSessionRole;
- (id)baseSceneComponentClassDictionary;
- (id)connectionHandlers;
- (id)disconnectionHandlers;
- (id)initialSettingsDiffActions;
- (Class)settingsClass;
- (id)finalActionHandlers;
@end
