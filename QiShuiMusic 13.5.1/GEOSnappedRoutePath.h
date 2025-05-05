@interface GEOSnappedRoutePath : NSObject
@property (nonatomic) I routeStartIndex;
@property (nonatomic) I routeEndIndex;
@property (nonatomic) BOOL isMapMatching;
@property (nonatomic) BOOL isMapMatched;
@property (nonatomic) BOOL hasCompletedMapMatching;
@property (nonatomic) NSArray edges;
@property (nonatomic) GEOComposedRouteSection section;
@property (nonatomic) r^{RouteMapMatchingSection=^^?} mapMatchingSection;
- (void)dealloc;
- (void).cxx_destruct;
- (id)description;
- (id)edges;
- (BOOL)unregisterObserver:;
- (id)section;
- (id).cxx_construct;
- (void)registerObserver:;
- (id)initWithRoute:section:routeStartIndex:routeEndIndex:;
- (void)_debugPrintEdge:;
- (BOOL)hasCompletedMapMatching;
- (BOOL)isMapMatched;
- (BOOL)isMapMatching;
- (float)_calculateEdgeLengthFrom:to:startCoord:endCoord:;
- (void)matchWithDecoder:completionHandler:;
- (id)mapMatchingSection;
- (BOOL)hasObserver:;
- (unsigned int)routeStartIndex;
- (unsigned int)routeEndIndex;
@end
