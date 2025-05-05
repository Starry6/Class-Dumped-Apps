@interface SAIntentGroupSiriKitRemoteExecution : AceObject
@property (nonatomic) NSString executionDeviceAssistantId;
@property (nonatomic) NSString invocationDeviceAssistantId;
@property (nonatomic) NSString personalDomainAuthenticationMode;
@property (nonatomic) NSString runLocation;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)executionDeviceAssistantId;
- (void)setExecutionDeviceAssistantId:;
- (id)invocationDeviceAssistantId;
- (void)setInvocationDeviceAssistantId:;
- (id)personalDomainAuthenticationMode;
- (void)setPersonalDomainAuthenticationMode:;
- (id)runLocation;
- (void)setRunLocation:;
+ (id)siriKitRemoteExecution;
+ (id)siriKitRemoteExecutionWithDictionary:context:;
@end
