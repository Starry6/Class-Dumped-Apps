@interface AFUserNotificationProvider : NSObject
- (id)_connection;
- (id)init;
- (void).cxx_destruct;
- (void)withdrawNotificationRequestWithIdentifier:;
- (void)receivedNotificationResponse:;
- (void)postNotificationRequest:responseHandler:;
@end
