@interface SAUICloseAssistant : SABaseClientBoundCommand
@property (nonatomic) NSString reason;
- (id)groupIdentifier;
- (id)reason;
- (BOOL)requiresResponse;
- (void)setReason:;
- (id)encodedClassName;
+ (id)closeAssistant;
+ (id)closeAssistantWithDictionary:context:;
@end
