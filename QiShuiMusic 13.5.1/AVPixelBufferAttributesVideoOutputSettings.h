@interface AVPixelBufferAttributesVideoOutputSettings : AVVideoOutputSettings
@property (nonatomic) NSDictionary pixelBufferAttributes;
@property (nonatomic) NSString fieldMode;
- (id)initWithPixelBufferAttributes:exceptionReason:;
- (void)dealloc;
- (id)initWithTrustedPixelBufferAttributes:;
- (BOOL)encoderIsAvailableOnCurrentSystemReturningError:;
- (int)height;
- (int)width;
- (BOOL)willYieldCompressedSamples;
- (id)pixelBufferAttributes;
- (id)cleanApertureDictionary;
- (BOOL)canFullySpecifyOutputFormatReturningReason:;
- (id)pixelAspectRatioDictionary;
- (id)fieldMode;
+ (id)_videoOutputSettingsWithVideoSettingsDictionary:exceptionReason:;
+ (id)eligibleOutputSettingsDictionaryKeys;
@end
