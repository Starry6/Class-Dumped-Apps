@interface UIPPTRequestAction : BSAction
- (long long)UIActionType;
- (id)initWithDesiredOrientation:;
- (BOOL)shouldChangeOrientation;
- (long long)orientationRequested;
@end
