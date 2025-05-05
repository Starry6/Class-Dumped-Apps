@interface BrightnessSystem : NSObject
- (id)init;
- (void)dealloc;
- (void)registerNotificationBlock:;
- (id)copyPropertyForKey:;
- (BOOL)setProperty:forKey:;
- (BOOL)isAlsSupported;
- (void)registerNotificationBlock:forProperties:;
@end
