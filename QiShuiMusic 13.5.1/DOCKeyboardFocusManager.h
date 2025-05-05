@interface DOCKeyboardFocusManager : NSObject
@property (nonatomic) NSPointerArray allKeyboardFocusable;
@property (nonatomic) BOOL externalFirstResponderInFlight;
- (id)init;
- (void).cxx_destruct;
- (void)registerKeyboardFocusable:;
- (void)unregisterKeyboardFocusable:;
- (id)currentlyFocused;
- (BOOL)requestCurrentFocus:;
- (BOOL)restoreCurrentlyFocused;
- (id)adjacentFocusableToFocusable:direction:;
- (void)_printAllRegisteredFocusable;
- (BOOL)_isRegistered:;
- (BOOL)externalFirstResponderInFlight;
- (void)setExternalFirstResponderInFlight:;
- (id)allKeyboardFocusable;
- (void)setAllKeyboardFocusable:;
+ (id)sharedManager;
+ (id)allDirectionalKeyCommandsWithAction:prioritize:;
+ (id)directionalKeyCommandsWithAction:prioritize:;
+ (id)systemProvidedDirectionalKeyCommandsWithAction:prioritize:;
+ (id)selectionKeyCommandsWithAction:prioritize:;
+ (id)systemProvidedSelectionKeyCommandsWithAction:prioritize:;
+ (void)_applySystemOverridePriority:;
+ (BOOL)isCustomKeyboardFocusEnabled;
@end
