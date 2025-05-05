@interface CBFilter : NSObject
- (id)init;
- (void)dealloc;
- (void)registerNotificationBlock:;
- (id)copyPropertyForKey:;
- (void)forgetDataForService:;
- (BOOL)setProperty:forKey:;
- (void)unregisterNotificationBlock;
- (id)filterEvent:;
- (void)sendNotificationForKey:andValue:;
- (void)scheduleWithDispatchQueue:;
- (void)unscheduleWithDispatchQueue:;
- (id)filterEvents:;
@end
