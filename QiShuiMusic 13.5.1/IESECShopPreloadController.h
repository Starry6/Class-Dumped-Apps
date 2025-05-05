@interface IESECShopPreloadController : IESECRelationController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cacheShopResources;
- (void)controllerDidLoad;
- (void)syncGeckoResourcesIfNeeded;
- (void)viewDidLoad;
@end
