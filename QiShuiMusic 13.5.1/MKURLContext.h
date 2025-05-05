@interface MKURLContext : NSObject
@property (nonatomic) BOOL originatedFromWatch;
@property (nonatomic) GEOCompanionRouteContext companionRouteContext;
- (void).cxx_destruct;
- (id)initWithOriginatedFromWatch:companionRouteContext:;
- (id)companionRouteContext;
- (BOOL)originatedFromWatch;
@end
