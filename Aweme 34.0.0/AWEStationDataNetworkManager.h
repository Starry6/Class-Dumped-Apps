@interface AWEStationDataNetworkManager : NSObject
@property (nonatomic) NSMutableDictionary networkSectionDictionary;
@property (nonatomic) BOOL isInteractionEnabled;
@property (nonatomic) BOOL isWaitingGoToVideoDetailList;
- (void)addNotificationsObservers;
- (void)fetchStationVideoDetailListDataWithIronManId:hashTagName:count:;
- (id)videoDetailListDataManagerForIronManId:;
- (void)goToVideoDetailListSuccessBlock:ironManId:expectedMinCursor:;
- (void)setNetworkSectionDictionary:;
- (id)networkSectionDictionary;
- (void)setIsWaitingGoToVideoDetailList:;
- (void)_startRequestWithIronManId:hashTagName:;
- (BOOL)isWaitingGoToVideoDetailList;
- (void)handleIronManEnterNotification:;
- (void)handleIronManExitNotification:;
- (void).cxx_destruct;
- (BOOL)isInteractionEnabled;
- (void)setIsInteractionEnabled:;
+ (id)sharedInstance;
@end
