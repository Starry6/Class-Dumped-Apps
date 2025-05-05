@interface CBCAManager : CBModule
- (void)handleNotificationForKey:withProperty:;
- (void)dealloc;
- (void)displayBrightnessPropertyHandler:;
- (id)initWithCADisplay:andQueue:;
- (void)updateDigitalDimmingBrightnessScaler:;
- (void)colorRampPropertyHandler:;
- (void)sendNotificationForKey:andValue:;
- (void)nitsThresholdPLCPropertyHandler:;
@end
