@interface SAAssistantNotReady : SABaseClientBoundCommand
@property (nonatomic) NSString language;
- (id)groupIdentifier;
- (void)setLanguage:;
- (id)language;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)assistantNotReady;
+ (id)assistantNotReadyWithDictionary:context:;
@end
