@interface SAIntentGroupConfirmIntentCompleted : SABaseCommand
@property (nonatomic) SAIntentGroupProtobufMessage intentResponse;
@property (nonatomic) NSString jsonEncodedIntentResponse;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)intentResponse;
- (void)setIntentResponse:;
- (id)jsonEncodedIntentResponse;
- (void)setJsonEncodedIntentResponse:;
+ (id)confirmIntentCompleted;
+ (id)confirmIntentCompletedWithDictionary:context:;
@end
