@interface SAIntentGroupProcessIntentCompleted : SABaseCommand
@property (nonatomic) SAIntentGroupBatchSlotResolutionResult batchSlotResolutionResult;
@property (nonatomic) SAIntentGroupConfirmIntentCompleted confirmIntentCompleted;
@property (nonatomic) SAIntentGroupHandleIntentCompleted handleIntentCompleted;
@property (nonatomic) NSString lastAttemptedStep;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)batchSlotResolutionResult;
- (id)confirmIntentCompleted;
- (id)handleIntentCompleted;
- (void)setBatchSlotResolutionResult:;
- (void)setConfirmIntentCompleted:;
- (void)setHandleIntentCompleted:;
- (id)lastAttemptedStep;
- (void)setLastAttemptedStep:;
+ (id)processIntentCompleted;
+ (id)processIntentCompletedWithDictionary:context:;
@end
