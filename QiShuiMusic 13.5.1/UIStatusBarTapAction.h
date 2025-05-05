@interface UIStatusBarTapAction : BSAction
@property (nonatomic) q type;
@property (nonatomic) double xPosition;
- (long long)UIActionType;
- (long long)type;
- (id)keyDescriptionForSetting:;
- (id)initWithType:xPosition:;
- (double)xPosition;
@end
