@interface AWEFeedPOIModuleService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)preloadConcernPOIGoodsResourceWithChannel:;
- (id)feedPOIDynamicCardManager;
- (Class)awemeDCardManagerClass;
- (Class)poiVideoViewControllerClass;
- (Class)poiEmphraseCollectViewBarContextClass;
- (id)poiEmphraseCollectViewBarContext;
@end
