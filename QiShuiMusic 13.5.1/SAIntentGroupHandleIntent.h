@interface SAIntentGroupHandleIntent : SABaseClientBoundCommand
@property (nonatomic) BOOL allowsPunchOut;
@property (nonatomic) SAIntentGroupProtobufMessage intent;
@property (nonatomic) NSString jsonEncodedIntent;
- (id)intent;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setIntent:;
- (id)jsonEncodedIntent;
- (void)setJsonEncodedIntent:;
- (BOOL)allowsPunchOut;
- (void)setAllowsPunchOut:;
+ (id)handleIntent;
+ (id)handleIntentWithDictionary:context:;
@end
