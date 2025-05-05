@interface AWBStatistics : NSObject
@property (nonatomic) NSNumber digitalFlash;
- (void).cxx_destruct;
- (id)initWithMetalContext:;
- (int)_createShaders;
- (id)digitalFlash;
- (void)setDigitalFlash:;
- (int)configWithRegs:;
- (int)configWithRegs:metadata:cameraInfo:;
- (int)configWithSetFile:metadata:cameraInfo:;
- (int)configWithMetadata:cameraInfo:moduleConfig:firstPixel:layout:;
- (int)_adjustConfigToValidRect:;
- (int)process:clipped:lscGainsTex:validRect:awbStatsBuffer:awbTileStatsConfig:downsizeFactor:;
- (int)configWindowsV2:metadata:tilesConfig:;
@end
