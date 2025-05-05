@interface GEOComposedGeometryRouteTrafficColors : NSObject
@property (nonatomic) ^I trafficColors;
@property (nonatomic) ^I trafficColorOffsets;
@property (nonatomic) Q count;
- (void)dealloc;
- (unsigned long long)count;
- (id)trafficColors;
- (id)trafficColorOffsets;
- (id)initWithColors:offsets:count:;
@end
