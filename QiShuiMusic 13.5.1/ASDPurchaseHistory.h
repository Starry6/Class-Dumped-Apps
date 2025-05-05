@interface ASDPurchaseHistory : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void)showAllWithCompletionHandler:;
- (void)setHidden:forStoreItemID:withCompletionHandler:;
- (void)updateForAccountID:withContext:withCompletionHandler:;
- (void)updateForAccountID:withCompletionHandler:;
- (void)executeQuery:withResultHandler:;
- (void)updateWithContext:withCompletionHandler:;
- (void)updateWithCompletionHandler:;
- (void).cxx_destruct;
+ (id)interface;
+ (id)sharedInstance;
@end
