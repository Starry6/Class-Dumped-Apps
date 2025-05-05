@interface SAReminderSmsPayload : AceObject
@property (nonatomic) NSString message;
@property (nonatomic) NSArray recipients;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)recipients;
- (id)groupIdentifier;
- (void)setMessage:;
- (void)setRecipients:;
- (id)encodedClassName;
- (id)message;
+ (id)smsPayload;
+ (id)smsPayloadWithDictionary:context:;
@end
