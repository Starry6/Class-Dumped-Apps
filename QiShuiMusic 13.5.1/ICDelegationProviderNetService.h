@interface ICDelegationProviderNetService : NSObject
@property (nonatomic) NSNetService netService;
@property (nonatomic) NSArray delegationAccountUUIDs;
@property (nonatomic) NSString deviceName;
@property (nonatomic) q securityMode;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_setState:;
- (void)dealloc;
- (id)deviceName;
- (long long)securityMode;
- (id)initWithNetService:;
- (void).cxx_destruct;
- (void)netServiceDidResolveAddress:;
- (void)netService:didNotResolve:;
- (void)netService:didUpdateTXTRecordData:;
- (id)netService;
- (id)delegationAccountUUIDs;
- (void)getResolvedStreamsWithCompletionHandler:;
- (void)_resolveWithCompletionHandler:;
- (void)_updateTXTRecordProperties;
@end
