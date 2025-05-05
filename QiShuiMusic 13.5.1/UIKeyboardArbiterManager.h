@interface UIKeyboardArbiterManager : NSObject
@property (nonatomic) BOOL remoteKeyboardUndocked;
- (void)preserveKeyboardWithId:;
- (void)forceKeyboardAway;
- (void)userSelectedApp:onCompletion:;
- (void)restoreKeyboardWithId:;
- (BOOL)remoteKeyboardUndocked;
- (void)userSelectedProcessIdentifier:withSceneIdentity:onCompletion:;
+ (id)arbiterClient;
+ (id)sharedArbiterManager;
@end
