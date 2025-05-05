@interface SAIntentGroupResolveAppForIntent : SABaseClientBoundCommand
@property (nonatomic) NSArray appsList;
@property (nonatomic) SAIntentGroupProtobufMessage intent;
@property (nonatomic) NSString jsonEncodedIntent;
- (id)intent;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setIntent:;
- (id)appsList;
- (void)setAppsList:;
- (id)jsonEncodedIntent;
- (void)setJsonEncodedIntent:;
+ (id)resolveAppForIntent;
+ (id)resolveAppForIntentWithDictionary:context:;
@end
