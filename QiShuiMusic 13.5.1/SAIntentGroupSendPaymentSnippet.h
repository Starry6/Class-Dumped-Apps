@interface SAIntentGroupSendPaymentSnippet : SAUISnippet
@property (nonatomic) SAIntentGroupProtobufMessage intent;
@property (nonatomic) SAIntentGroupProtobufMessage intentResponse;
- (id)intent;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)intentResponse;
- (void)setIntent:;
- (void)setIntentResponse:;
+ (id)sendPaymentSnippet;
+ (id)sendPaymentSnippetWithDictionary:context:;
@end
