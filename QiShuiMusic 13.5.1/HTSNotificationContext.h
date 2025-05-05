@interface HTSNotificationContext : NSObject
@property (nonatomic) NSError registerError;
@property (nonatomic) NSData deviceToken;
@property (nonatomic) NSDictionary remoteUserInfo;
@property (nonatomic) @? notificationResultHander;
@property (nonatomic) UILocalNotification localNotification;
@property (nonatomic) UIUserNotificationSettings settings;
- (id)notificationResultHander;
- (id)registerError;
- (id)remoteUserInfo;
- (void)setNotificationResultHander:;
- (void)setRegisterError:;
- (void)setRemoteUserInfo:;
- (id)settings;
- (void)setSettings:;
- (void)setDeviceToken:;
- (void).cxx_destruct;
- (id)deviceToken;
- (void)setLocalNotification:;
- (id)localNotification;
@end
