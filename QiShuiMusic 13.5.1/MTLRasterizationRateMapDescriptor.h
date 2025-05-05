@interface MTLRasterizationRateMapDescriptor : NSObject
@property (nonatomic) MTLRasterizationRateLayerArray layers;
@property (nonatomic) {?=QQQ} screenSize;
@property (nonatomic) NSString label;
@property (nonatomic) Q layerCount;
- (id)copyWithZone:;
- (id)layerAtIndex:;
- (void)setLayer:atIndex:;
+ (id)allocWithZone:;
+ (id)rasterizationRateMapDescriptorWithScreenSize:;
+ (id)rasterizationRateMapDescriptorWithScreenSize:layer:;
+ (id)rasterizationRateMapDescriptorWithScreenSize:layerCount:layers:;
@end
