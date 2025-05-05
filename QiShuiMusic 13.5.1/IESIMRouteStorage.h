@interface IESIMRouteStorage : NSObject
@property (nonatomic) NSLock lock;
@property (nonatomic) NSMutableDictionary routeMap;
- (id)_routeDictionaryForScheme:createIfNeeded:;
- (id)_routeForScheme:;
- (id)_routeInfoMapForRoutes:;
- (id)_routeInfoMapForScheme:;
- (id)parseRouteForURL:errorMessage:;
- (id)registerURLString:;
- (void)removeAllURL;
- (void)removeURLForScheme:;
- (id)routeMap;
- (void)setRouteMap:;
- (id)init;
- (id)lock;
- (void).cxx_destruct;
- (void)setLock:;
- (id)allRouteInfos;
@end
