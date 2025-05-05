@interface SAIntentGroupIntentSignal : SABaseClientBoundCommand
@property (nonatomic) SAIntentGroupProtobufMessage intent;
@property (nonatomic) NSString jsonEncodedIntent;
- (id)intent;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setIntent:;
- (BOOL)mutatingCommand;
- (id)jsonEncodedIntent;
- (void)setJsonEncodedIntent:;
+ (id)intentSignal;
+ (id)intentSignalWithDictionary:context:;
@end
