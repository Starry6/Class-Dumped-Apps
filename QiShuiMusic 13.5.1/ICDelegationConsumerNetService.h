@interface ICDelegationConsumerNetService : NSObject
@property (nonatomic) <ICDelegationConsumerNetServiceDelegate> delegate;
@property (nonatomic) NSDictionary userIdentityDelegationAccountUUIDs;
@property (nonatomic) ICDelegationServiceSecuritySettings securitySettings;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)publish;
- (void)dealloc;
- (void)setDelegate:;
- (void)stop;
- (id)delegate;
- (void).cxx_destruct;
- (void)netService:didNotPublish:;
- (void)netService:didAcceptConnectionWithInputStream:outputStream:;
- (void)netServiceDidPublish:;
- (id)initWithUserIdentityDelegationAccountUUIDs:;
- (id)securitySettings;
- (void)_updateNetServiceStatus;
- (id)userIdentityDelegationAccountUUIDs;
@end
