@interface SAAppsQuitApp : SABaseClientBoundCommand
@property (nonatomic) NSString appBundleId;
@property (nonatomic) NSString sceneId;
- (void)setAppBundleId:;
- (id)groupIdentifier;
- (id)appBundleId;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)sceneId;
- (void)setSceneId:;
+ (id)quitApp;
+ (id)quitAppWithDictionary:context:;
@end
