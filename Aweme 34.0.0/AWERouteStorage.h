@interface AWERouteStorage : NSObject
@property (nonatomic) NSLock lock;
@property (nonatomic) NSMutableDictionary routeMap;
- (id)registerURLString:;
- (id)parseRouteForURL:errorMessage:;
- (id)_routeForScheme:;
- (id)routeMap;
- (void)setRouteMap:;
- (id)_routeInfoMapForScheme:;
- (id)_routeDictionaryForScheme:createIfNeeded:;
- (id)_routeInfoMapForRoutes:;
- (void)removeURLForScheme:;
- (void)removeAllURL;
- (id)init;
- (void)setLock:;
- (id)lock;
- (void).cxx_destruct;
- (id)allRouteInfos;
@end
