@interface AWEFollowPrivateAccountUtils : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)checkAndFollowPrivateAccount:;
+ (void)followPrivateAccountWithCompletion:;
+ (id)currentPrivateAlertController;
+ (BOOL)isPrivateAccount:;
+ (void)followPrivateAccountWithCompletion:needsToast:;
+ (void)checkAndFollowPrivateAccount:needsToast:;
@end
