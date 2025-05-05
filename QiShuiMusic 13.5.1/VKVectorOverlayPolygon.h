@interface VKVectorOverlayPolygon : NSObject
@property (nonatomic) {Range<signed char>=cc} worldIndexes;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithMapPoints:count:;
- (id)simplifiedGeometryAtZoomLevel:;
- (id)worldIndexes;
@end
