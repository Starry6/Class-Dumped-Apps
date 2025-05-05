@interface MPSImageScreenTelemetry : MPSUnaryImageKernel
@property (nonatomic) Q zoneWidth;
@property (nonatomic) Q zoneHeight;
@property (nonatomic) Q numberOfZonesInX;
@property (nonatomic) Q numberOfZonesInY;
@property (nonatomic) {?={?=QQQ}{?=QQQ}} sourceRegion;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (id)initWithDevice:;
- (void)setNumberOfZonesInX:;
- (void)setNumberOfZonesInY:;
- (void)encodeToCommandBuffer:sourceTexture:destinationBuffer:destinationOffset:;
- (void)setZoneHeight:;
- (void)setZoneWidth:;
- (id)sourceRegion;
- (void)setSourceRegion:;
- (unsigned long long)zoneWidth;
- (unsigned long long)zoneHeight;
- (unsigned long long)numberOfZonesInX;
- (unsigned long long)numberOfZonesInY;
+ (id)libraryInfo:;
@end
