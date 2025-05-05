@interface SAIntentGroupLaunchAppWithIntent : SABaseClientBoundCommand
@property (nonatomic) SAIntentGroupProtobufMessage handledIntent;
@property (nonatomic) SAIntentGroupProtobufMessage handledIntentResponse;
@property (nonatomic) NSString jsonEncodedHandledIntent;
@property (nonatomic) NSString jsonEncodedHandledIntentResponse;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)handledIntent;
- (void)setHandledIntent:;
- (id)handledIntentResponse;
- (void)setHandledIntentResponse:;
- (id)jsonEncodedHandledIntent;
- (void)setJsonEncodedHandledIntent:;
- (id)jsonEncodedHandledIntentResponse;
- (void)setJsonEncodedHandledIntentResponse:;
+ (id)launchAppWithIntent;
+ (id)launchAppWithIntentWithDictionary:context:;
@end
