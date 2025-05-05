@interface UISceneHitTestAction : BSAction
@property (nonatomic) {CGPoint=dd} touchLocation;
- (void)sendResponse:;
- (long long)UIActionType;
- (id)initWithTouchLocation:responseHandler:;
- (id)touchLocation;
@end
