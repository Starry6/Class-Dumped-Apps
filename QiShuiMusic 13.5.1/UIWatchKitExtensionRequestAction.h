@interface UIWatchKitExtensionRequestAction : BSAction
@property (nonatomic) NSDictionary request;
- (void)sendResponse:;
- (id)request;
- (long long)UIActionType;
- (id)initWithInfo:timeout:forResponseOnQueue:withHandler:;
- (id)keyDescriptionForSetting:;
- (id)initWithRequest:withHandler:;
@end
