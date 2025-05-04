@interface AWEBindPhoneAlertUtils : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canShow;
- (void)showWithCloseCallback:;
+ (BOOL)shouldForbidWartermarkWhenDownloadAweme;
+ (BOOL)isSelfSeeWhenPostAmeme;
+ (BOOL)shouldShowAlertInFeed;
+ (void)showAlertWhenLogoutIfNeed:;
+ (id)enterFromWithBindPhoneAlertType:;
+ (BOOL)shouldShowAlertFromPrivateToPublic;
+ (BOOL)_shouldForbidWartermarkWhenDownloadAweme;
+ (BOOL)_isSelfSeeWhenPostAmeme;
+ (BOOL)_isSuccessOrSelfSeeWhenPostAmeme;
+ (void)showAlertInFeedIfNeed;
+ (BOOL)isSuccessOrSelfSeeWhenPostAmeme;
+ (BOOL)shouldShowAlertInUserDetail;
+ (id)sharedInstance;
@end
