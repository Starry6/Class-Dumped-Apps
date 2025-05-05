@interface CPZoneBorderNeighbor : NSObject
- (id)init;
- (void)dealloc;
- (id)copyWithZone:;
- (id)initSuper;
- (void)setNeighborShape:;
- (id)neighborShape;
- (void)setShapeSide:;
- (int)shapeSide;
@end
