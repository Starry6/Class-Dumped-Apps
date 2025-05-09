@interface AAMessagingService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSMutableArray pendingInheritanceMessages;
@property (nonatomic) NSMutableArray pendingCustodianMessages;
@property (nonatomic) <AAMessagingServiceDelegate> inheritanceDelegate;
@property (nonatomic) <AAMessagingServiceDelegate> custodianDelegate;
- (void)service:activeAccountsChanged:;
- (void)service:devicesChanged:;
- (void)service:account:identifier:didSendWithSuccess:error:context:;
- (void)service:account:incomingData:fromID:context:;
- (void).cxx_destruct;
- (id)initWithServiceName:;
- (void)_processMessage:;
- (void)partitionByCapability:completion:;
- (void)fetchCapability:destinations:completion:;
- (void)doDestinations:haveIneligibleDeviceForCapability:completion:;
- (id)sendMessage:destinations:responseIdentifier:fireAndForget:requiredCapabilities:lackingCapabilities:error:;
- (id)inheritanceDelegate;
- (void)setInheritanceDelegate:;
- (id)custodianDelegate;
- (void)setCustodianDelegate:;
- (id)pendingInheritanceMessages;
- (id)pendingCustodianMessages;
- (void)_getCurrentRemoteDevices:completion:;
- (id)_optionsDictionaryWithResponseIdentifier:fireAndForget:requiredCapabilities:lackingCapabilities:;
- (void)_addMessageToPendingInheritanceMessages:;
- (void)_addMessageToPendingCustodianMessages:;
- (void)_processPendingIDSMessagesOfType:;
- (id)_createNewCapabilitySetFrom:;
+ (id)sharedService;
@end
