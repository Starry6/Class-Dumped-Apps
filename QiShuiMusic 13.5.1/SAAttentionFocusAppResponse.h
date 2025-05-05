@interface SAAttentionFocusAppResponse : SABaseClientBoundCommand
@property (nonatomic) NSString appBundleId;
@property (nonatomic) NSString sceneId;
- (void)setAppBundleId:;
- (id)groupIdentifier;
- (id)appBundleId;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)sceneId;
- (void)setSceneId:;
@end
