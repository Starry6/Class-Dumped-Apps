@interface SAReminderSiriKitInteraction : SADomainObject
@property (nonatomic) SAIntentGroupProtobufMessage intent;
@property (nonatomic) SAIntentGroupProtobufMessage intentResponse;
- (id)intent;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)intentResponse;
- (void)setIntent:;
- (void)setIntentResponse:;
+ (id)siriKitInteraction;
+ (id)siriKitInteractionWithDictionary:context:;
@end
