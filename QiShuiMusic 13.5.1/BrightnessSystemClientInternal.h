@interface BrightnessSystemClientInternal : NSObject
- (id)init;
- (void)dealloc;
- (void)addKeyToClientProperties:;
- (void)addPropertiesForNotification:;
- (void)registerNotificationBlock:;
- (id)copyPropertyForKey:;
- (BOOL)setSyncProperty:forKey:;
- (BOOL)setProperty:forKey:;
- (void)stopXpcService;
- (void)removePropertyFromNotification:;
- (void)removeKeyFromClientProperties:;
- (void)addPropertyForNotification:;
- (void)registerNotificationBlock:forProperties:;
- (void)removePropertiesFromNotification:;
@end
