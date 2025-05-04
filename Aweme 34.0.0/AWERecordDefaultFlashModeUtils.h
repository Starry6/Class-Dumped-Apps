@interface AWERecordDefaultFlashModeUtils : NSObject
+ (unsigned long long)p_convertFlashModeToTorchMode:;
+ (unsigned long long)p_convertTorchModeToFlashMode:;
+ (unsigned long long)torchMode;
+ (void)setTorchMode:;
+ (void)setFlashMode:;
+ (unsigned long long)flashMode;
@end
