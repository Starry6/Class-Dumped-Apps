@interface SSVAppleAccountStore : NSObject
@property (nonatomic) ACAccount primaryAppleAccount;
- (id)init;
- (id)primaryAppleAccount;
- (void).cxx_destruct;
- (void)_accountStoreDidChangeNotification:;
+ (id)sharedAccountStore;
@end
