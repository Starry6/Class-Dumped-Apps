@interface SAPhoneHangUp : SABaseClientBoundCommand
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)hangUp;
+ (id)hangUpWithDictionary:context:;
@end
