@interface UILinkConnectionAction : BSAction
@property (nonatomic) LNConnectionAction action;
- (id)action;
- (long long)UIActionType;
- (id)keyDescriptionForSetting:;
- (id)initWithAction:responseHandler:;
@end
