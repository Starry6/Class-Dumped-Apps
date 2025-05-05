@interface LANotificationOfBooleanState : LANotification
@property (nonatomic) BOOL boolValue;
@property (nonatomic) BOOL oldBoolValue;
- (BOOL)boolValue;
- (id)darwinNotificationForValue:;
- (id)darwinNotificationForBoolValue:;
- (BOOL)oldBoolValue;
+ (void)postNotificationWithNewBoolState:;
@end
