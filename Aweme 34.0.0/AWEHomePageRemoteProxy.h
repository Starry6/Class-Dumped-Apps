@interface AWEHomePageRemoteProxy : NSObject
@property (nonatomic) NSObject<AWEHomePageRemoteControllerProtocol> controller;
@property (nonatomic) <AWEHomePageRemoteBusinessDelegate> businessDelegate;
- (id)businessDelegate;
- (void)setBusinessDelegate:;
- (void)businessTrackModeClickWithModeName:;
- (void)businessPositiveClosePanelWithAnimateType:;
- (id)createHomepageRemoteViewWithModuleType:withItemDataModel:;
- (id)convertItemDataModelWithModuleType:extraData:;
- (void)businessRemoveAlertIfNeed;
- (id)initWithController:homePageRemoteBusinessDelegate:;
- (void)setController:;
- (void).cxx_destruct;
- (id)controller;
@end
