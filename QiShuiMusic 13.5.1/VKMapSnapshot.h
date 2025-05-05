@interface VKMapSnapshot : NSObject
@property (nonatomic) double scale;
@property (nonatomic) NSArray images;
@property (nonatomic) NSDictionary memoryStats;
- (id)imageSurfaceAtIndex:;
- (void)dealloc;
- (id)imageSurfaces;
- (id)imageDataInFormat:;
- (id)pointForCoordinate:;
- (void)enumerateImagesWithBlock:;
- (id)coordinateForPoint:;
- (id)initWithCoder:;
- (id)images;
- (id)_initWithImages:displayStyles:displayStylesCount:scale:camera:;
- (void)encodeWithCoder:;
- (void)setMemoryStats:;
- (void).cxx_destruct;
- (id)description;
- (id)memoryStats;
- (double)scale;
+ (BOOL)supportsSecureCoding;
@end
