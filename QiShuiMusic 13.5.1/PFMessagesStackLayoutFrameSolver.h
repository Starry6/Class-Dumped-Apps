@interface PFMessagesStackLayoutFrameSolver : NSObject
@property (nonatomic) q stackedItemsCount;
@property (nonatomic) double normalizedVerticalInsets;
@property (nonatomic) double normalizedVerticalOffset;
@property (nonatomic) double normalizedSizeTransform;
@property (nonatomic) double rotationAngle;
@property (nonatomic) NSArray normalizedHorizontalOffsets;
- (id)init;
- (void)setRotationAngle:;
- (void)setStackedItemsCount:;
- (void).cxx_destruct;
- (double)rotationAngle;
- (long long)stackedItemsCount;
- (void)getGeometries:count:;
- (double)normalizedVerticalInsets;
- (void)setNormalizedVerticalInsets:;
- (double)normalizedVerticalOffset;
- (void)setNormalizedVerticalOffset:;
- (double)normalizedSizeTransform;
- (void)setNormalizedSizeTransform:;
- (id)normalizedHorizontalOffsets;
- (void)setNormalizedHorizontalOffsets:;
@end
