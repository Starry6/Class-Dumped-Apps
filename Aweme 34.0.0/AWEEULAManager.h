@interface AWEEULAManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)termsOfUseURL;
+ (id)privacyPolicySecondPageURL;
+ (id)cookiesPolicyURL;
+ (void)showEULAAlertControllerIfNeeded;
+ (id)privacyPolicyURL;
@end
