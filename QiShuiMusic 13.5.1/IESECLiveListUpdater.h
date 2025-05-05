@interface IESECLiveListUpdater : NSObject
@property (nonatomic) IESECLiveContext liveContext;
@property (nonatomic) NSDictionary entranceInfoParams;
- (void)setLiveContext:;
- (id)entranceInfoParams;
- (id)getRequestWithProductInfos:listViewShowing:extraRequestParams:;
- (id)liveContext;
- (id)newestTabsWithMsgTabInfosV2:;
- (void)setEntranceInfoParams:;
- (id)tabsAfterIntimeRefreshWithOriginTabs:newestTabInfos:;
- (void).cxx_destruct;
@end
