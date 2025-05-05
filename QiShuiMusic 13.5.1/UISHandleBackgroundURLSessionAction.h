@interface UISHandleBackgroundURLSessionAction : BSAction
@property (nonatomic) NSString sessionIdentifier;
- (id)initWithSessionIdentifier:;
- (id)sessionIdentifier;
- (long long)UIActionType;
- (BOOL)isKindOfClass:;
- (id)initWithInfo:timeout:forResponseOnQueue:withHandler:;
- (id)keyDescriptionForSetting:;
- (id)initWithSessionIdentifier:timeout:forResponseOnQueue:withHandler:;
@end
