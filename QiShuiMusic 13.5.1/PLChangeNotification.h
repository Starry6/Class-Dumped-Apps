@interface PLChangeNotification : NSNotification
@property (nonatomic) PLChangeNotificationCenter changeNotificationCenter;
- (void)_calculateDiffs;
- (id)changeNotificationCenter;
+ (id)notificationWithName:object:userInfo:;
@end
