@interface AWEAdLynxPromptView : AWEBDARifleView
@property (nonatomic) AWEOriginalAdCardModel cardModel;
@property (nonatomic) NSDate loadTime;
@property (nonatomic) @? didLynxFailToLoadHandler;
@property (nonatomic) UIViewController<AWEPlayInteractionViewControllerProtocol> interactionVC;
@property (nonatomic) NSDictionary liveRoomInfo;
@property (nonatomic) NSString requestURL;
@property (nonatomic) double loadDuration;
@property (nonatomic) NSError loadError;
@property (nonatomic) @? didFailToLoadHandler;
@property (nonatomic) @? didFinishLoadHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cardModel;
- (void)invokeJSWithEvent:params:;
- (void)setLoadDuration:;
- (void)setCardModel:;
- (id)lynxBridge;
- (id)didFinishLoadHandler;
- (id)didFailToLoadHandler;
- (void)setDidFailToLoadHandler:;
- (void)setDidFinishLoadHandler:;
- (void)rifleView:didFinishLoadWithURL:;
- (void)rifleView:didLoadFailedWithURL:error:;
- (id)interactionVC;
- (void)setInteractionVC:;
- (double)adVisibleTime;
- (void)setLoadTime:;
- (void)setDidLynxFailToLoadHandler:;
- (void)tryStartLoadWithCardModel:awemeModel:cardCode:needClueAdAutoOpen:;
- (id)didLynxFailToLoadHandler;
- (id)liveRoomInfo;
- (void)trackOthershowOver;
- (void)setLiveRoomInfo:;
- (void)notifyDialogPopUpEvent;
- (void)notifyFeedCardStartUnfoldEvent;
- (void)notifyOnContainerVisibilityChangeFromLive;
- (void)notifyOnLeaveConvertPage:;
- (id)initWithFrame:withAweme:withCardCode:needClueAdAutoOpen:interactionVC:withFailHandler:;
- (id)view;
- (id)requestURL;
- (id)contentView;
- (void)setRequestURL:;
- (void).cxx_destruct;
- (id)loadError;
- (void)reset;
- (id)loadTime;
- (double)loadDuration;
- (void)setLoadError:;
@end
