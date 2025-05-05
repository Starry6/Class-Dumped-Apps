@interface UISiriTaskAction : BSAction
@property (nonatomic) AFSiriTask payload;
- (id)payload;
- (id)initWithPayload:;
- (long long)UIActionType;
- (id)initWithInfo:timeout:forResponseOnQueue:withHandler:;
- (id)keyDescriptionForSetting:;
@end
