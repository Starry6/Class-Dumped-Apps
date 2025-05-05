@interface MTLRasterizationRateLayerDescriptor : NSObject
@property (nonatomic) {?=QQQ} sampleCount;
@property (nonatomic) {?=QQQ} maxSampleCount;
@property (nonatomic) ^f horizontalSampleStorage;
@property (nonatomic) ^f verticalSampleStorage;
@property (nonatomic) MTLRasterizationRateSampleArray horizontal;
@property (nonatomic) MTLRasterizationRateSampleArray vertical;
- (id)init;
- (id)copyWithZone:;
- (id)initWithSampleCount:;
- (id)initWithSampleCount:horizontal:vertical:;
+ (id)allocWithZone:;
@end
