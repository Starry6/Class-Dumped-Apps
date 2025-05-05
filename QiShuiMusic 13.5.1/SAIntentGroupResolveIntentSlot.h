@interface SAIntentGroupResolveIntentSlot : SABaseClientBoundCommand
@property (nonatomic) SAIntentGroupProtobufMessage intent;
@property (nonatomic) NSString intentSlotKeyPath;
@property (nonatomic) NSNumber intentSlotValueIndex;
@property (nonatomic) NSString jsonEncodedIntent;
- (id)intent;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setIntent:;
- (BOOL)mutatingCommand;
- (id)jsonEncodedIntent;
- (void)setJsonEncodedIntent:;
- (id)intentSlotKeyPath;
- (void)setIntentSlotKeyPath:;
- (id)intentSlotValueIndex;
- (void)setIntentSlotValueIndex:;
+ (id)resolveIntentSlot;
+ (id)resolveIntentSlotWithDictionary:context:;
@end
