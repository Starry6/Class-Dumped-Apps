@interface VKRouteLineObserver : NSObject
- (void)dealloc;
- (void).cxx_destruct;
- (void)routeLineDidUpdateSections:;
- (id)initWithTransitSupport:andRouteLine:;
@end
