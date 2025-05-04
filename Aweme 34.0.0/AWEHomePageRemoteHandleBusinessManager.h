@interface AWEHomePageRemoteHandleBusinessManager : NSObject
@property (nonatomic) AWEHomePageRemoteManager remoteManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)businessTrackModeClickWithModeName:;
- (void)setRemoteManager:;
- (void)businessRemoveAlertIfNeed;
- (id)getHomePageRemoteTrackContext;
- (void)updatePocketIconWithModel:withBusinessType:;
- (void)updateSelectedPocketIconWithModel:withBusinessType:;
- (void)panelPositiveCloseWithAnimateType:;
- (id)createHomepageRemoteViewWithController:withModuleType:withItemDataModel:;
- (id)convertItemDataModelWithController:withModuleType:extraData:;
- (id)initWithRemoteManager:;
- (void).cxx_destruct;
- (id)remoteManager;
+ (id)supportHomePageRemoteCardUI;
+ (id)supportHomePageRemoteButtonUI;
+ (id)supportHomePageRemoteRadioBoxUI;
@end
