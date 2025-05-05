@interface SAAssistantNotFound : SABaseClientBoundCommand
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)assistantNotFound;
+ (id)assistantNotFoundWithDictionary:context:;
@end
