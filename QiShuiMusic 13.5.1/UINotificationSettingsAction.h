@interface UINotificationSettingsAction : BSAction
@property (nonatomic) UNNotification notification;
- (id)notification;
- (long long)UIActionType;
- (id)initWithXPCDictionary:;
- (id)valueDescriptionForFlag:object:ofSetting:;
- (void).cxx_destruct;
- (id)keyDescriptionForSetting:;
- (id)initWithNotification:;
@end
