@interface AWEUserHomeControllerManager : AWEShellControllerManager
@property (nonatomic) AWEProfileTabListRegistry tabListRegistry;
@property (nonatomic) <AWEProfileHeaderViewControllerProviderProtocol> headerProvider;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)classNameArray;
- (void)loadControllersWithViewController:rootView:withContext:;
- (id)aAWEPadUserPageAdapter;
- (id)__classNameArray;
- (void)setTabListRegistry:;
- (id)tabListRegistry;
- (void).cxx_destruct;
- (id)headerProvider;
- (void)setHeaderProvider:;
+ (Class)aAWEPadUserPageAdapterClass;
@end
