@interface UISceneProposalActionResponse : BSActionResponse
@property (nonatomic) NSString persistentIdentifier;
@property (nonatomic) NSString sceneIdentifier;
- (id)sceneIdentifier;
- (id)persistentIdentifier;
- (id)initWithInfo:error:;
- (id)keyDescriptionForSetting:;
- (id)_responseWithPersistentIdentifier:;
+ (id)responseWithPersistentIdentifier:;
+ (id)responseWithSceneID:;
@end
