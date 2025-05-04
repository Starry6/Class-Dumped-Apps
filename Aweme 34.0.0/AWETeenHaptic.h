@interface AWETeenHaptic : NSObject
+ (void)triggerWithType:;
+ (id)p_sharedHapticEngineInstance;
+ (void)startHapticWithIntensity:andSharpness:interval:;
+ (void)notifyCustomSuccess;
@end
