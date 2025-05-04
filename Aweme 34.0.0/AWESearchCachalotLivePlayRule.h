@interface AWESearchCachalotLivePlayRule : NSObject
@property (nonatomic) UIView<AWESearchAutoPlayCardProtocol> lastActiveView;
@property (nonatomic) AWESearchAutoPlayHandler handler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getAutoPlayViewFromViews:inContainer:contentOffset:directionPoint:speedPoint:;
- (id)lastActiveView;
- (void)setLastActiveView:;
- (id)autoplayZoneBoundaryWithContainerView:;
- (void).cxx_destruct;
- (unsigned long long)ruleType;
@end
