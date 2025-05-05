@interface NSKeyValueNestedProperty : NSKeyValueProperty
- (void)object:didRemoveObservance:recurse:;
- (BOOL)matchesWithoutOperatorComponentsKeyPath:;
- (void)dealloc;
- (void)object:didAddObservance:recurse:;
- (void)_givenPropertiesBeingInitialized:getAffectingProperties:;
- (id)_initWithContainerClass:keyPath:firstDotIndex:propertiesBeingInitialized:;
- (id)_keyPathIfAffectedByValueForMemberOfKeys:;
- (id)dependentValueKeyOrKeysIsASet:;
- (id)_keyPathIfAffectedByValueForKey:exactMatch:;
- (void)_addDependentValueKey:;
- (Class)_isaForAutonotifying;
- (id)description;
- (BOOL)object:withObservance:willChangeValueForKeyOrKeys:recurse:forwardingValues:;
- (void)object:withObservance:didChangeValueForKeyOrKeys:recurse:forwardingValues:;
@end
