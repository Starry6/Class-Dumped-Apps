@interface CHPolygon : NSObject
@property (nonatomic) double area;
@property (nonatomic) q vertexCount;
@property (nonatomic) ^{CGPoint=dd} vertices;
- (void)dealloc;
- (long long)vertexCount;
- (void)enumerateEdgesWithBlock:;
- (id)initWithRect:;
- (id)description;
- (double)area;
- (void)setArea:;
- (id)vertices;
- (id)initWithVertices:vertexCount:;
- (id)polygonDrawing;
- (id)polygonByIntersectingWithClipPolygon:;
- (long long)edgeCountIntersectingLineSegment:;
+ (id)_sutherlandHodgmanClipForSubjectPolygon:usingClipPolygon:;
+ (id)_createClippedPolygonForPolygon:clippingLine:clippedPolygonVertexCount:;
@end
