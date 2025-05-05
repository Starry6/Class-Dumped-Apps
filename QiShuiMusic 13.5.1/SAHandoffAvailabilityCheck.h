@interface SAHandoffAvailabilityCheck : SABaseClientBoundCommand
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)handoffAvailabilityCheck;
+ (id)handoffAvailabilityCheckWithDictionary:context:;
@end
