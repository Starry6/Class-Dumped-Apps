@interface GKPath : NSObject
@property (nonatomic) float radius;
@property (nonatomic) Q numPoints;
@property (nonatomic) BOOL cyclical;
- (void)setRadius:;
- (float)radius;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)pointAtIndex:;
- (unsigned long long)numPoints;
- (id)initWithPoints:count:radius:cyclical:;
- (id)initWithFloat3Points:count:radius:cyclical:;
- (void)set_cyclical:;
- (BOOL)_cyclical;
- (id)pathway;
- (void)setCyclical:;
- (BOOL)isCyclical;
- (id)initWithGraphNodes:radius:;
- (id)float2AtIndex:;
- (id)float3AtIndex:;
+ (id)pathWithPoints:count:radius:cyclical:;
+ (id)pathWithGraphNodes:radius:;
+ (id)pathWithFloat3Points:count:radius:cyclical:;
@end
