@interface NSKeyValueUnnestedProperty : NSKeyValueProperty
- (Class)isaForAutonotifying;
- (void)object:didRemoveObservance:recurse:;
- (BOOL)matchesWithoutOperatorComponentsKeyPath:;
- (void)dealloc;
- (void)object:didAddObservance:recurse:;
- (void)_givenPropertiesBeingInitialized:getAffectingProperties:;
- (id)_keyPathIfAffectedByValueForMemberOfKeys:;
- (id)_keyPathIfAffectedByValueForKey:exactMatch:;
- (void)_addDependentValueKey:;
- (Class)_isaForAutonotifying;
- (id)description;
- (id)_initWithContainerClass:key:propertiesBeingInitialized:;
- (id)keyPathIfAffectedByValueForMemberOfKeys:;
- (BOOL)object:withObservance:willChangeValueForKeyOrKeys:recurse:forwardingValues:;
- (id)keyPathIfAffectedByValueForKey:exactMatch:;
- (void)object:withObservance:didChangeValueForKeyOrKeys:recurse:forwardingValues:;
@end
