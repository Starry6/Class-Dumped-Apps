@interface NSKeyValueProperty : NSObject
- (Class)isaForAutonotifying;
- (void)object:didRemoveObservance:recurse:;
- (BOOL)matchesWithoutOperatorComponentsKeyPath:;
- (id)restOfKeyPathIfContainedByValueForKeyPath:;
- (void)dealloc;
- (void)object:didAddObservance:recurse:;
- (id)keyPath;
- (id)dependentValueKeyOrKeysIsASet:;
- (id)keyPathIfAffectedByValueForMemberOfKeys:;
- (BOOL)object:withObservance:willChangeValueForKeyOrKeys:recurse:forwardingValues:;
- (id)keyPathIfAffectedByValueForKey:exactMatch:;
- (void)object:withObservance:didChangeValueForKeyOrKeys:recurse:forwardingValues:;
- (id)copyWithZone:;
- (id)_initWithContainerClass:keyPath:propertiesBeingInitialized:;
@end
