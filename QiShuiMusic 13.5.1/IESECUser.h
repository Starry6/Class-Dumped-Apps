@interface IESECUser : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onAccountLogout;
- (void)didFinishHostLogin;
- (void)didFinishHostLogout;
- (void)onAccountLogin;
+ (id)currentHostUserID;
+ (BOOL)isHostLogin;
+ (id)sharedInstance;
+ (void)setup;
@end
