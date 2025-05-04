@interface AWEEffectTabDetailComponent : AWEUserDetailBaseComponent
@property (nonatomic) AWEEffectArtistViewController effectVC;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onRefreshHeaderView:shouldRefreshTabView:;
- (id)supportTabTypes;
- (id)tabViewControllerForType:;
- (void)onResetUI;
- (id)effectVC;
- (void)setEffectVC:;
- (void).cxx_destruct;
@end
