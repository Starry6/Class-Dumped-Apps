@interface AWEDeleteAccountManager : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)showCancelationView;
+ (void)_cancel;
+ (void)dismiss;
+ (void)_logout;
@end
