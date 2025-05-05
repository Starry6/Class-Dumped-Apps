@interface EKCalendarNotificationReference : NSObject
@property (nonatomic) NSInteger type;
@property (nonatomic) EKCalendarNotification notification;
@property (nonatomic) EKObjectID objectID;
@property (nonatomic) EKEventStore eventStore;
- (id)objectID;
- (id)notification;
- (id)eventStore;
- (int)type;
- (void).cxx_destruct;
- (id)description;
- (id)_notification;
- (id)initWithType:objectID:date:eventStore:;
- (id)initWithType:objectID:eventStore:;
- (long long)_notificationTypeForResourceChange:notificationType:;
@end
