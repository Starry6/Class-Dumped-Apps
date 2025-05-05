@interface SAHLGetActiveWorkoutApplicationIdentifier : SABaseClientBoundCommand
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)getActiveWorkoutApplicationIdentifier;
+ (id)getActiveWorkoutApplicationIdentifierWithDictionary:context:;
@end
