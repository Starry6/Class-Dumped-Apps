@interface AWESearchLifeServiceBaseService : AWESearchVerticalContainerService
@property (nonatomic) BOOL hideCorrectionForFilterSearch;
@property (nonatomic) NSDictionary clientServerPassForOnce;
@property (nonatomic) <AWESearchLifeServiceBaseViewControllerProtocol> container;
@property (nonatomic) <AWESearchServiceManagerProtocol> serviceManager;
@property (nonatomic) NSString serviceID;
@property (nonatomic) NSString serviceName;
@property (nonatomic) q priority;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)fetchDataWithKeyWord:enterFrom:extraLogParams:isSearchByUserClick:isFilterSearch:animated:completion:;
- (void)paramsContextDidReady:;
- (void)setClientServerPassForOnce:;
- (void)chunkHandleReciverCardsPatchResponse:;
- (id)clientServerPassForOnce;
- (void)refreshContentAfterOtherScenesUpdatedWithEnterFrom:;
- (BOOL)hideCorrectionForFilterSearch;
- (void)prepareRequestDataWithKeyWord:extraLogParams:isFilterSearch:;
- (void)setHideCorrectionForFilterSearch:;
- (id)fetchResponseWithObject:;
- (void).cxx_destruct;
@end
