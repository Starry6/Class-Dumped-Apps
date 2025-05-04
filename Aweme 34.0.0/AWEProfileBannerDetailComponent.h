@interface AWEProfileBannerDetailComponent : AWEProfileBannerBaseComponent
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)aAWEPadModuleAdapter;
- (void)onRefreshHeaderView:shouldRefreshTabView:;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear;
+ (Class)aAWEPadModuleAdapterClass;
@end
