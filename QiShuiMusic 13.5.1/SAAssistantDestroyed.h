@interface SAAssistantDestroyed : SABaseClientBoundCommand
@property (nonatomic) NSString assistantId;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)assistantId;
- (void)setAssistantId:;
+ (id)assistantDestroyed;
+ (id)assistantDestroyedWithDictionary:context:;
@end
