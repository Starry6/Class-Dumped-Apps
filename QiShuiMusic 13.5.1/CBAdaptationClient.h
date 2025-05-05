@interface CBAdaptationClient : NSObject
@property (nonatomic) BOOL supported;
- (BOOL)supported;
- (BOOL)available;
- (BOOL)getEnabled;
- (id)init;
- (void)dealloc;
- (id)initWithClientObj:;
- (BOOL)registerNotificationCallbackBlock:withQueue:;
- (void)handleBrightnessSystemNotificationForKey:withValue:;
- (void)setSupported:;
- (int)getAdaptationMode;
- (BOOL)overrideStrengths:forModes:nModes:;
- (void)unregisterNotificationForType:;
- (BOOL)animateFromWeakestAdaptationModeInArray:withLength:toWeakestInArray:withLength:withProgress:andPeriod:;
- (BOOL)setEnabled:;
- (BOOL)registerNotificationForType:;
- (BOOL)setWeakestAdaptationModeFromArray:withLength:andPeriod:;
- (BOOL)setAdaptationMode:withPeriod:;
- (BOOL)getStrengths:nStrengths:;
- (void)unregisterNotificationCallbackBlock;
+ (BOOL)supportsAdaptation;
@end
