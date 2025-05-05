@interface SAReminderPhonePayload : AceObject
@property (nonatomic) NSString phoneCallType;
@property (nonatomic) NSString recipient;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)encodedClassName;
- (void)setRecipient:;
- (id)recipient;
- (id)phoneCallType;
- (void)setPhoneCallType:;
+ (id)phonePayload;
+ (id)phonePayloadWithDictionary:context:;
@end
