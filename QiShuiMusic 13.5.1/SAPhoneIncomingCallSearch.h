@interface SAPhoneIncomingCallSearch : SABaseClientBoundCommand
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)incomingCallSearch;
+ (id)incomingCallSearchWithDictionary:context:;
@end
