@interface AWEXPlayOpenServiceHttpManager : NSObject
@property (nonatomic) Q source;
- (void)hmdTrackServiceName:duration:category:;
- (void)requestRealnameAuthWithIdentityName:identityNumber:callback:;
- (void)requestRealnameAuthWithType:authCode:callback:;
- (unsigned long long)source;
- (void)setSource:;
+ (id)sharedInstance;
@end
