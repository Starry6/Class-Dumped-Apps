@interface SAReminderEmailPayload : AceObject
@property (nonatomic) NSArray recipientsTo;
@property (nonatomic) NSString subject;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)subject;
- (id)groupIdentifier;
- (void)setSubject:;
- (id)encodedClassName;
- (id)recipientsTo;
- (void)setRecipientsTo:;
+ (id)emailPayload;
+ (id)emailPayloadWithDictionary:context:;
@end
