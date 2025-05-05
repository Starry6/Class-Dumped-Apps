@interface UIDestroySceneAction : BSAction
@property (nonatomic) Q preferredAnimationType;
@property (nonatomic) NSSet persistedIdentifiers;
@property (nonatomic) BOOL destroySceneSession;
@property (nonatomic) BOOL userOriginatedRequest;
- (long long)UIActionType;
- (id)keyDescriptionForSetting:;
- (id)initWithPreferredAnimationType:callbackQueue:completion:;
- (id)initWithPersistedIdentifiers:preferredAnimationType:callbackQueue:completion:;
- (id)initWithPersistedIdentifiers:preferredAnimationType:forDestroyingSession:callbackQueue:completion:;
- (id)initWithPersistedIdentifiers:preferredAnimationType:forDestroyingSession:userOriginatedRequest:callbackQueue:completion:;
- (unsigned long long)preferredAnimationType;
- (id)persistedIdentifiers;
- (BOOL)destroySceneSession;
- (BOOL)isUserOriginatedRequest;
@end
