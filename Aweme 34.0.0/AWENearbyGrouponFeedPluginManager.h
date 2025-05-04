@interface AWENearbyGrouponFeedPluginManager : NSObject
@property (nonatomic) NSMutableDictionary pluginMap;
@property (nonatomic) AWENearbyPageContext pageContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)findPluginByClass:;
- (BOOL)registerPlugin:error:;
- (id)storageKeyForPlugin:;
- (id)pluginMap;
- (id)storageKeyForPluginClassName:;
- (void)setPluginMap:;
- (void)scrollViewDidScroll:;
- (void).cxx_destruct;
- (void)setPageContext:;
- (id)pageContext;
@end
