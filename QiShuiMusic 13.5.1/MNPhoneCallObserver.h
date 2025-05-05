@interface MNPhoneCallObserver : NSObject
- (BOOL)hasActiveCalls;
+ (id)sharedPhoneCallObserver;
@end
