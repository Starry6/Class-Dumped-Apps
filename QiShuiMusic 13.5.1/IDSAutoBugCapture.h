@interface IDSAutoBugCapture : NSObject
+ (BOOL)isSupported;
+ (void)triggerCaptureWithEvent:destinations:context:completion:;
+ (void)triggerCaptureWithEvent:context:completion:;
@end
