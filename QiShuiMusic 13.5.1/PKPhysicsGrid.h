@interface PKPhysicsGrid : NSObject
@property (nonatomic) NSInteger width;
@property (nonatomic) NSInteger height;
@property (nonatomic) {shared_ptr<PKCGrid>=^{PKCGrid}^{__shared_weak_count}} gridPtr;
- (int)height;
- (int)width;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)physicsBodyFromLVS0:;
- (id)physicsBodyFromSmoothedOutline:size:;
- (BOOL)isGridRegionOccupied:y:width:height:;
- (unsigned char)gridDataAtX:y:z:;
- (id)pathFromOutlineWithSmoothingThreshold:bounds:;
- (id)gridPtr;
- (void)setGridPtr:;
+ (id)gridFromOccupancyArray:bytePitch:width:height:;
+ (id)gridFromRGBAU8PixelData:imageWidth:imageHeight:alphaThreshold:accuracy:;
+ (id)vectorGridFromRGBAU8PixelData:imageWidth:imageHeight:accuracy:;
@end
