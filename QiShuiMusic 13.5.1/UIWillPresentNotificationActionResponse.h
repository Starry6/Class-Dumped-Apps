@interface UIWillPresentNotificationActionResponse : BSActionResponse
@property (nonatomic) Q options;
- (id)initWithOptions:;
- (unsigned long long)options;
- (id)initWithInfo:error:;
- (id)keyDescriptionForSetting:;
+ (id)responseWithOptions:;
@end
