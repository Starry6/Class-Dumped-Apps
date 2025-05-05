@interface ICDelegationProviderServiceSession : NSObject
@property (nonatomic) <ICDelegationProviderServiceSessionDelegate> delegate;
@property (nonatomic) NSArray delegationAccountUUIDs;
@property (nonatomic) ICDelegationProviderNetService netService;
@property (nonatomic) ICRequestContext requestContext;
@property (nonatomic) NSArray userIdentities;
@property (nonatomic) ICUserIdentityStore userIdentityStore;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_finishWithError:;
- (void)start;
- (id)userIdentityStore;
- (void)setDelegate:;
- (void)stop;
- (id)delegate;
- (id)requestContext;
- (void).cxx_destruct;
- (id)netService;
- (void)delegationServiceConnectionDidClose:;
- (void)delegationServiceConnection:didEncouterError:;
- (id)initWithUserIdentities:userIdentityStore:requestContext:netService:delegationAccountUUIDs:;
- (void)_handleStartDelegationResponse:;
- (void)_startDelegation;
- (id)delegationAccountUUIDs;
- (id)userIdentities;
@end
