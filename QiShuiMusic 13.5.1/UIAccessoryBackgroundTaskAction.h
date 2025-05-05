@interface UIAccessoryBackgroundTaskAction : BSAction
- (id)init;
- (long long)UIActionType;
- (id)initWithInfo:timeout:forResponseOnQueue:withHandler:;
@end
