@interface AWEGrouponLifeFeedsLynxSection : NSObject
@property (nonatomic) NSMutableDictionary reuseItemMap;
@property (nonatomic) NSMutableOrderedSet dormancyReuseItemKeySet;
@property (nonatomic) NSMutableOrderedSet activationReuseItemKeySet;
@property (nonatomic) NSMutableDictionary lynxViewItemMap;
- (void)dormancyLynxView:;
- (id)lynxViewWithSessionId:;
- (void)activateLynxView:;
- (id)tryFetchReuseLynxViewWithSessionId:;
- (void)reuseLynxView:;
- (id)employLynxView:;
- (void)dormancyAll;
- (id)lynxViewItemByContainerId:;
- (id)lynxViewItemMap;
- (id)itemWithLynxView:;
- (void)dormancyItem:;
- (id)reuseItemMap;
- (id)dormancyReuseItemKeySet;
- (id)activationReuseItemKeySet;
- (void)setReuseItemMap:;
- (void)setDormancyReuseItemKeySet:;
- (void)setActivationReuseItemKeySet:;
- (void)setLynxViewItemMap:;
- (id)init;
- (void)activateItem:;
- (void)removeItem:;
- (void).cxx_destruct;
@end
