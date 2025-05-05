@interface SAIntentGroupSupportedIntentResponse : SAIntentGroupIntentInvocationResponse
@property (nonatomic) NSArray commands;
@property (nonatomic) NSString useCaseId;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)commands;
- (id)encodedClassName;
- (void)setCommands:;
- (id)useCaseId;
- (void)setUseCaseId:;
+ (id)supportedIntentResponse;
+ (id)supportedIntentResponseWithDictionary:context:;
@end
