@interface UIQuickLookSceneConfigurationAction : BSAction
- (long long)UIActionType;
- (id)loadSceneConfiguration;
+ (id)actionWithSceneConfiguration:;
@end
