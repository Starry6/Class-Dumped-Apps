@interface SAIntentGroupProcessIntent : SABaseClientBoundCommand
@property (nonatomic) BOOL allowsPunchOut;
@property (nonatomic) SAIntentGroupProtobufMessage intent;
@property (nonatomic) NSArray intentSlotKeyPaths;
@property (nonatomic) NSString jsonEncodedIntent;
@property (nonatomic) BOOL shouldRunHandleIntent;
- (id)intent;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setIntent:;
- (BOOL)mutatingCommand;
- (id)jsonEncodedIntent;
- (void)setJsonEncodedIntent:;
- (id)intentSlotKeyPaths;
- (void)setIntentSlotKeyPaths:;
- (BOOL)allowsPunchOut;
- (void)setAllowsPunchOut:;
- (BOOL)shouldRunHandleIntent;
- (void)setShouldRunHandleIntent:;
+ (id)processIntent;
+ (id)processIntentWithDictionary:context:;
@end
