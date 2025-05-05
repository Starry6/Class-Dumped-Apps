@interface UIHandleStatusBarTapAction : BSAction
@property (nonatomic) q statusBarStyle;
@property (nonatomic) Q statusBarStyleOverride;
- (long long)statusBarStyle;
- (long long)UIActionType;
- (id)initWithInfo:timeout:forResponseOnQueue:withHandler:;
- (id)keyDescriptionForSetting:;
- (id)initWithStatusBarStyle:;
- (id)initWithStatusBarStyleOverride:;
- (id)initWithStatusBarStyle:andStatusBarStyleOverride:;
- (unsigned long long)statusBarStyleOverride;
@end
