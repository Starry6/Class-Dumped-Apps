@interface UISceneProposalAction : BSAction
@property (nonatomic) NSString persistentIdentifier;
@property (nonatomic) NSString sceneIdentifier;
@property (nonatomic) BSAction action;
- (id)sceneIdentifier;
- (id)action;
- (id)persistentIdentifier;
- (long long)UIActionType;
- (id)keyDescriptionForSetting:;
- (id)initWithPersistentIdentifier:action:queue:completion:;
- (id)initWithSceneIdentifier:action:queue:completion:;
@end
