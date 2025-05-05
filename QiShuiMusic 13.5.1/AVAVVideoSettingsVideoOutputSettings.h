@interface AVAVVideoSettingsVideoOutputSettings : AVVideoOutputSettings
@property (nonatomic) I videoCodecType;
@property (nonatomic) NSDictionary videoEncoderSpecification;
@property (nonatomic) NSDictionary videoCompressionProperties;
- (void)dealloc;
- (BOOL)encoderIsAvailableOnCurrentSystemReturningError:;
- (int)height;
- (int)width;
- (BOOL)willYieldCompressedSamples;
- (id)cleanApertureDictionary;
- (BOOL)canFullySpecifyOutputFormatReturningReason:;
- (id)pixelAspectRatioDictionary;
- (unsigned int)videoCodecType;
- (id)videoEncoderSpecification;
- (id)videoCompressionProperties;
- (id)initWithAVVideoSettingsDictionary:exceptionReason:;
- (id)initWithTrustedAVVideoSettingsDictionary:;
+ (id)_videoOutputSettingsWithVideoSettingsDictionary:exceptionReason:;
+ (id)eligibleOutputSettingsDictionaryKeys;
+ (BOOL)_validateVideoCompressionProperties:againstSupportedPropertyDictionary:forCodecType:exceptionReason:;
@end
