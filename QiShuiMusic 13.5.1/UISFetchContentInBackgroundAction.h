@interface UISFetchContentInBackgroundAction : BSAction
- (void)sendResponse:;
- (id)initWithHandler:;
- (long long)UIActionType;
- (id)initWithInfo:timeout:forResponseOnQueue:withHandler:;
@end
