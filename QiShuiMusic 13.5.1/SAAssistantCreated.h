@interface SAAssistantCreated : SABaseClientBoundCommand
@property (nonatomic) NSString assistantId;
@property (nonatomic) NSString speechId;
- (id)groupIdentifier;
- (void)setSpeechId:;
- (BOOL)requiresResponse;
- (id)speechId;
- (id)encodedClassName;
- (id)assistantId;
- (void)setAssistantId:;
+ (id)assistantCreated;
+ (id)assistantCreatedWithDictionary:context:;
@end
