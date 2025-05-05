@interface SwiftUI.ClarityUIApplicationSceneSpecification : UIApplicationSceneSpecification
@property (nonatomic) # settingsClass;
@property (nonatomic) # clientSettingsClass;
@property (nonatomic) NSString uiSceneSessionRole;
@property (nonatomic) # uiSceneMinimumClass;
@property (nonatomic) NSArray initialSettingsDiffActions;
@property (nonatomic) NSArray initialActionHandlers;
- (id)init;
- (Class)uiSceneMinimumClass;
- (id)uiSceneSessionRole;
- (id)initialSettingsDiffActions;
- (id)initialActionHandlers;
- (Class)settingsClass;
- (Class)clientSettingsClass;
@end
