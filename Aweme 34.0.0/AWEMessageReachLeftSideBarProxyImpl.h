@interface AWEMessageReachLeftSideBarProxyImpl : NSObject
@property (nonatomic) AWELeftSideBarBasePresenter presenter;
@property (nonatomic) <AWELeftSideBarMessageReachBussinessDelegate> bussinessDelegate;
@property (nonatomic) <AWEMessageReachInternalAbilityProtocol> config;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setBussinessDelegate:;
- (id)bussinessDelegate;
- (id)initWithPresenter:leftSideBarBussinessDelegate:;
- (void)updateSideBarNoticeInfo:completion:;
- (void)hideLeftSideBarBussinessEntranceRedDotAllWithHideType:completion:;
- (void)setConfig:;
- (id)config;
- (id)presenter;
- (void)setPresenter:;
- (void).cxx_destruct;
@end
