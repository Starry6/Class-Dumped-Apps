@interface SADestroyAssistant : SABaseCommand
@property (nonatomic) NSString assistantId;
@property (nonatomic) NSString speechId;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (void)setSpeechId:;
- (BOOL)requiresResponse;
- (id)speechId;
- (id)encodedClassName;
- (id)assistantId;
- (void)setAssistantId:;
+ (id)destroyAssistant;
+ (id)destroyAssistantWithDictionary:context:;
@end
