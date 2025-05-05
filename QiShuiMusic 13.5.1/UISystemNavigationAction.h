@interface UISystemNavigationAction : BSAction
@property (nonatomic) NSArray destinations;
- (id)destinations;
- (id)URLForDestination:;
- (BOOL)sendResponseForDestination:;
- (long long)UIActionType;
- (id)valueDescriptionForFlag:object:ofSetting:;
- (id)bundleIdForDestination:;
- (id)titleForDestination:;
- (void).cxx_destruct;
- (id)_destinationContextForResponseDestination:;
- (id)initWithInfo:timeout:forResponseOnQueue:withHandler:;
- (id)sceneIdentifierForDestination:;
- (id)initWithDestinationContexts:forResponseOnQueue:withHandler:;
- (id)keyDescriptionForSetting:;
@end
