@interface AWEFeedPOIDynamicCardManager : NSObject
@property (nonatomic) AWEFeedPOIDynamicCardController poiCardDynamicVc;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)registerPOIDynamicCardManagerViewController:;
- (void)controlInFlowPageHiddenState:;
- (void)loadInFlowWithSchema:initialData:;
- (id)poiCardDynamicVc;
- (void)setPoiCardDynamicVc:;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
