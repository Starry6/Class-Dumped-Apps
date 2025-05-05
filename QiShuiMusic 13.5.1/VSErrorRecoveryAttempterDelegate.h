@interface VSErrorRecoveryAttempterDelegate : NSObject
- (void)didPresentErrorWithRecovery:contextInfo:;
+ (id)sharedDelegate;
@end
