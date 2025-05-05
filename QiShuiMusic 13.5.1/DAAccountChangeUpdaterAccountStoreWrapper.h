@interface DAAccountChangeUpdaterAccountStoreWrapper : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithAccountStore:;
- (void)removeAccount:completion:;
- (void)updateAccount:withCompletionHandler:;
- (void).cxx_destruct;
- (void)addAccount:withCompletionHandler:;
@end
