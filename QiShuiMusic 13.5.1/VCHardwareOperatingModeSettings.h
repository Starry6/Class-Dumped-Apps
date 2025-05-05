@interface VCHardwareOperatingModeSettings : NSObject
@property (nonatomic) I usageMode;
@property (nonatomic) BOOL supportVCPDecoderHEVC;
@property (nonatomic) BOOL supportVCPEncoderHEVC;
@property (nonatomic) BOOL vcpInitializedForHEVC;
@property (nonatomic) NSString featureListStringHEVC;
@property (nonatomic) NSString featureListStringH264;
@property (nonatomic) I tilesPerVideoFrame;
- (id)initWithMode:;
- (void)dealloc;
- (BOOL)vcpSupportsHEVCEncoder;
- (unsigned int)tilesPerVideoFrame;
- (unsigned int)numTilesPerVideoFrameForHDRMode:;
- (BOOL)vcpSupportsHEVCDecoder;
- (void)featureListString;
- (void)vcpCodecGetPropertiesForID:block:;
- (unsigned int)usageMode;
- (BOOL)supportVCPDecoderHEVC;
- (BOOL)supportVCPEncoderHEVC;
- (BOOL)vcpInitializedForHEVC;
- (id)featureListStringHEVC;
- (id)featureListStringH264;
+ (unsigned int)encoderUsageTypeWithOperatingMode:;
@end
