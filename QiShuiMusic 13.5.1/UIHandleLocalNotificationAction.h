@interface UIHandleLocalNotificationAction : BSAction
@property (nonatomic) UILocalNotification notification;
@property (nonatomic) NSString action;
@property (nonatomic) NSDictionary userResponse;
- (id)notification;
- (id)action;
- (long long)UIActionType;
- (id)userResponse;
- (id)initWithXPCDictionary:;
- (id)valueDescriptionForFlag:object:ofSetting:;
- (id)initWithInfo:timeout:forResponseOnQueue:withHandler:;
- (id)keyDescriptionForSetting:;
- (id)_initWithNotification:action:userResponse:type:withHandler:;
- (id)initWithNotification:;
- (id)initWithNotification:withHandler:;
- (id)initWithNotification:action:withHandler:;
- (id)initWithNotification:action:userResponse:withHandler:;
@end
