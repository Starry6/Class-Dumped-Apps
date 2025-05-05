@interface UIQuickLookInternalSceneSpecification : UIApplicationSceneSpecification
- (BOOL)isInternal;
- (id)uiSceneSessionRole;
- (id)initialActionHandlers;
- (BOOL)affectsAppLifecycleIfInternal;
@end
