@interface AWEShowMonetizeRefresh : NSObject
@property (nonatomic) NSMutableDictionary refreshers;
@property (nonatomic) NSHashTable handlers;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addRefreshHandler:;
- (void)removeRefreshHandler:;
- (void)refreshMonetizeContentWithConfigs:;
- (BOOL)isTopMonetizeSceneContainerWithHandler:;
- (id)findSameContentIDMonetizeContent:monetizeDataItems:;
- (id)getRefresherWithConfig:;
- (id)refreshers;
- (id)createRefresherWithType:;
- (id)getAllRefreshHandlers;
- (id)getInTopMonetizeContainerHandler;
- (void)setRefreshers:;
- (id)handlers;
- (id)init;
- (void)setHandlers:;
- (void).cxx_destruct;
@end
