@interface IESLiveNewDressLoaderManager : NSObject
@property (nonatomic) IESLiveNewFetchDressTaskThrottle taskThrottle;
@property (nonatomic) <IESLivePrivilegeDressAPI> dressApi;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <IESLiveNewDressDataStoreProtocol> dataStore;
- (id)dressApi;
- (void)prefetchDressWith:completion:;
- (void)scheduleUnionTask:;
- (void)setDressApi:;
- (void)setTaskThrottle:;
- (id)taskThrottle;
- (void)updateDressListWithCompletion:;
- (void)setDataStore:;
- (id)dataStore;
- (id)init;
- (void).cxx_destruct;
@end
