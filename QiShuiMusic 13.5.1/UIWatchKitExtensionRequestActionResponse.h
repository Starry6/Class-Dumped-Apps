@interface UIWatchKitExtensionRequestActionResponse : BSActionResponse
@property (nonatomic) NSDictionary result;
- (id)result;
- (id)keyDescriptionForSetting:;
- (id)initWithWatchKitExtensionResult:;
+ (id)responseWithWatchKitExtensionResult:;
@end
