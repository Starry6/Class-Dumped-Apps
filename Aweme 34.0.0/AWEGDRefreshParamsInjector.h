@interface AWEGDRefreshParamsInjector : NSObject
@property (nonatomic) NSString domainKey;
@property (nonatomic) NSDictionary requestParams;
@property (nonatomic) NSString transactionID;
@property (nonatomic) NSString handle;
@property (nonatomic) q priority;
@property (nonatomic) NSString componentID;
- (void)subscribeLifeStorageChangeWithDomainAndComponentID;
- (id)subscribeKey;
- (void)unsubscribeLifeStorageChange;
- (void)updateStatusByNewValue:;
- (id)initWithDomainKey:componentId:;
- (void)setDomainKey:;
- (id)transactionID;
- (id)domainKey;
- (void)dealloc;
- (void)setHandle:;
- (id)handle;
- (long long)priority;
- (void)setPriority:;
- (void)setTransactionID:;
- (void).cxx_destruct;
- (void)setComponentID:;
- (id)componentID;
- (id)requestParams;
- (void)setRequestParams:;
@end
