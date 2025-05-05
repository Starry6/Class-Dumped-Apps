@interface UISFetchContentInBackgroundActionResponse : BSActionResponse
- (unsigned long long)result;
- (id)initWithInfo:error:;
- (id)initWithBackgroundFetchResult:;
- (id)keyDescriptionForSetting:;
+ (id)responseWithResult:;
@end
