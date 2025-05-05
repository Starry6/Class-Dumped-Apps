@interface UISHandleRemoteNotificationAction : BSAction
- (void)sendResponse:;
- (id)payload;
- (id)initWithRemoteNotificationPayload:withHandler:;
- (id)action;
- (id)_initWithRemoteNotificationPayload:action:userResponse:type:withHandler:;
- (id)initWithRemoteNotificationPayload:action:withHandler:;
- (unsigned long long)UIActionType;
- (id)userResponse;
- (id)initWithInfo:timeout:forResponseOnQueue:withHandler:;
- (id)initWithRemoteNotificationPayload:action:userResponse:withHandler:;
- (id)keyDescriptionForSetting:;
@end
