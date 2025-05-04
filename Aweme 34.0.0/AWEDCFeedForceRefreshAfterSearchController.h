@interface AWEDCFeedForceRefreshAfterSearchController : AWEDCFeedBaseController
@property (nonatomic) NSArray needToBeRemovedModels;
@property (nonatomic) NSArray searchIDList;
@property (nonatomic) BOOL needForceRefreshForSearch;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)containerViewDidAppear:;
- (id)classNameWithReferString;
- (void)setNeedForceRefreshForSearch:;
- (void)handleSearchBackToFeedNotification:;
- (void)forceRefreshIfNeeded;
- (void)setSearchIDList:;
- (BOOL)needForceRefreshForSearch;
- (id)searchIDList;
- (BOOL)needForceRefreshForOutOfTimeFromController;
- (void)setNeedToBeRemovedModels:;
- (id)needToBeRemovedModels;
- (void)clearNeedForceRefreshForOutOfTimeFromController;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)addObservers;
- (void)containerViewDidLoad;
- (void)clearRecords;
@end
