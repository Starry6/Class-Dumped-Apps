@interface SAIntentGroupResolveIntentSlotCompleted : SABaseCommand
@property (nonatomic) SAIntentGroupProtobufMessage intentSlotResolutionResult;
@property (nonatomic) NSString jsonEncodedIntentSlotResolutionResult;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)intentSlotResolutionResult;
- (void)setIntentSlotResolutionResult:;
- (id)jsonEncodedIntentSlotResolutionResult;
- (void)setJsonEncodedIntentSlotResolutionResult:;
+ (id)resolveIntentSlotCompleted;
+ (id)resolveIntentSlotCompletedWithDictionary:context:;
@end
