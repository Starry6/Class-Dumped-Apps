@interface AWEShowBottomButtonTemplateScene : NSObject
@property (nonatomic) <AWEShowBottomButtonSceneConfigProtocol> config;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)sceneWillActivate;
- (void)sceneDidActivate;
- (void)sceneWillDeactivate;
- (void)sceneDidDeactivate;
- (Class)safeLeftRegisteredPluginClasses;
- (void)safeDidRegisterPlugin:;
- (Class)safeRightRegisteredPluginClasses;
- (unsigned long long)safeLeftPluginType;
- (id)safeLeftButtonConfig;
- (unsigned long long)safeRightPluginType;
- (id)safeRightButtonConfig;
- (void)safeWillUnregisterPlugin:;
- (void)setConfig:;
- (id)initWithConfig:;
- (id)config;
- (id)sceneID;
- (void).cxx_destruct;
@end
