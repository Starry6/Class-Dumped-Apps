@interface UIWillPresentNotificationAction : BSAction
@property (nonatomic) UNNotification notification;
@property (nonatomic) BOOL isDeliverable;
@property (nonatomic) BOOL isLocal;
@property (nonatomic) BOOL isRemote;
- (id)notification;
- (id)_trigger;
- (long long)UIActionType;
- (id)initWithXPCDictionary:;
- (id)valueDescriptionForFlag:object:ofSetting:;
- (void).cxx_destruct;
- (BOOL)isRemote;
- (BOOL)isLocal;
- (id)keyDescriptionForSetting:;
- (id)initWithNotification:timeout:withHandler:;
- (id)initWithNotification:deliverable:timeout:withHandler:;
- (BOOL)isDeliverable;
@end
