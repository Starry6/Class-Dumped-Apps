@interface AVCaptureVideoSettingsValidator : NSObject
+ (BOOL)validateVideoSettings:allowingFeatures:validPixelKeys:validPixelFormats:validCodecKeys:validCodecs:exceptionReason:;
@end
