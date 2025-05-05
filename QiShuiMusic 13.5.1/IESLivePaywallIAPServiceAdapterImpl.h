@interface IESLivePaywallIAPServiceAdapterImpl : IESLiveBaseAdapter
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)showPaywallLoadingViewControllerWithBiz:completion:;
- (void)showPaywallNativeIAPViewControllerWithBiz:completion:;
@end
