@interface SAIntentGroupConfirmIntent : SABaseClientBoundCommand
@property (nonatomic) SAIntentGroupProtobufMessage intent;
@property (nonatomic) NSString jsonEncodedIntent;
- (id)intent;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setIntent:;
- (id)jsonEncodedIntent;
- (void)setJsonEncodedIntent:;
+ (id)confirmIntent;
+ (id)confirmIntentWithDictionary:context:;
@end
