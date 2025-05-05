@interface PKExtendedPhysicsBody : PKPhysicsBody
@property (nonatomic) double normalizedDensity;
- (id)init;
- (id)description;
- (id)initWithRectangleOfSize:;
- (void)setNormalizedDensity:;
- (double)normalizedDensity;
- (void)associate;
- (BOOL)dissociate;
+ (id)bodyWithEllipseInRect:;
+ (id)bodyWithCircleOfRadius:;
+ (id)bodyWithRectangleOfSize:;
+ (id)bodyWithRectangleOfSize:center:;
+ (id)bodyWithEdgeFromPoint:toPoint:;
+ (id)bodyWithPolygonFromPath:;
+ (id)bodyWithEdgeChainFromPath:;
+ (id)bodyWithEdgeLoopFromPath:;
+ (id)bodyWithBodies:;
@end
