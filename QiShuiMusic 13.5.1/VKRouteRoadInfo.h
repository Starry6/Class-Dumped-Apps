@interface VKRouteRoadInfo : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSString shieldGroup;
@property (nonatomic) {PolylineCoordinate=If} routeOffset;
- (void).cxx_destruct;
- (id)name;
- (id).cxx_construct;
- (id)routeOffset;
- (id)shieldGroup;
- (id)initWithName:shieldGroup:offset:;
@end
