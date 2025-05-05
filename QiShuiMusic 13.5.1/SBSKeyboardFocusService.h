@interface SBSKeyboardFocusService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_connection;
- (void)dealloc;
- (void).cxx_destruct;
- (void)requestKeyboardFocusForSceneIdentity:processID:completion:;
- (void)removeKeyboardFocusFromSceneIdentity:processID:;
- (id)applyAdditionalDeferringRules:whenSceneHasKeyboardFocus:processID:;
- (id)setExternalSceneIdentities:forReason:;
+ (id)systemKeyCommandOverlayEnvironment;
@end
