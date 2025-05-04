@interface AWEUserTrackerIMP : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)settingPageForLoginResultTracking;
- (void)p_trackLoginResult:isCancel:context:error:;
- (void)trackOAuthResult:platform:error:;
- (void)trackLoginResult:isCancel:context:error:;
@end
