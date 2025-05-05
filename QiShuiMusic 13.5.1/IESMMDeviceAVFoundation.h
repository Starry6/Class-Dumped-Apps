@interface IESMMDeviceAVFoundation : NSObject
+ (id)ratioSizeFromHeight:ratio:;
+ (id)ratioSizeFromOriginSize:ratio:;
+ (id)suggestedAutoRatioCaptureSize;
+ (id)suggestedCapturePresetByRatio:;
+ (id)suggestedOutputSizeForPreset:;
+ (id)suggestedOutputSizeForPreset:specialPresetPhoto:;
+ (id)reduceSizeTo1080P:;
@end
