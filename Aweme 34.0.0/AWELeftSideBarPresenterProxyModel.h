@interface AWELeftSideBarPresenterProxyModel : NSObject
@property (nonatomic) <AWELeftSideBarEntranceViewAbility> leftSideBarEntranceViewProxy;
@property (nonatomic) <AWELeftSideBarItemAbility> leftSideBarProxy;
@property (nonatomic) <AWEMessageReachLeftSideBarAbility> messageReachProxy;
- (id)leftSideBarProxy;
- (id)leftSideBarEntranceViewProxy;
- (void)setLeftSideBarEntranceViewProxy:;
- (void)setLeftSideBarProxy:;
- (id)messageReachProxy;
- (void)setMessageReachProxy:;
- (void).cxx_destruct;
@end
