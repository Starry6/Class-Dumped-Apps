@interface SAExecuteCallbacks : SABaseClientBoundCommand
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)executeCallbacks;
+ (id)executeCallbacksWithDictionary:context:;
@end
