@interface SAReminderAssistantPayload : AceObject
@property (nonatomic) NSString utterance;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)utterance;
- (void)setUtterance:;
+ (id)assistantPayload;
+ (id)assistantPayloadWithDictionary:context:;
@end
