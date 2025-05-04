@interface AWEProfileBannerHomeComponent : AWEProfileBannerBaseComponent
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onReloadUI:isCache:;
- (void)onRefreshUserDataUseCache:;
- (void)onResetUI;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear;
@end
