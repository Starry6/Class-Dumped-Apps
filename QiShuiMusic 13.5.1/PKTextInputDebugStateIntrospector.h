@interface PKTextInputDebugStateIntrospector : NSObject
@property (nonatomic) PKTextInputInteraction interaction;
@property (nonatomic) <PKTextInputDebugStateIntrospectorDelegate> delegate;
- (void)dealloc;
- (id)interaction;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithInteraction:;
- (id)fullDebugStateDescription;
- (void)_debugStateDidChange;
- (id)debugStateKeys;
- (id)debugStateTitleForStateKey:;
- (id)debugStateDetailViewControllerForStateKey:;
- (BOOL)debugStateCanShowDetailsForStateKey:;
- (id)debugStateDescriptionForStateKey:;
- (id)_introspectableForStateKey:;
+ (id)_knownInstances;
+ (id)debugStateLineDescriptionForIntrospectable:;
+ (void)debugStateDidChange;
@end
