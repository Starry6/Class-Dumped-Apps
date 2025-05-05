@interface BKSButtonHapticsController : NSObject
- (void)applyDefinitions:;
- (void)playHapticIdentifier:speed:;
+ (id)sharedInstance;
@end
