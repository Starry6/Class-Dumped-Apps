@interface SAGetAssistantData : SABaseClientBoundCommand
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)getAssistantData;
+ (id)getAssistantDataWithDictionary:context:;
@end
