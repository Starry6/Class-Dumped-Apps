@interface ASDPurchaseManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void).cxx_destruct;
- (void)adoptionStatus:withReplyHandler:;
- (void)unadoptWithReplyHandler:;
- (id)adopt:;
- (id)adoptableBundleIdentifiers;
- (void)processPurchase:withResponseHandler:;
- (void)startPurchase:withResultHandler:;
- (void)checkAutomaticDownloadQueue;
- (void)checkPendingQueue;
- (void)checkPreflightForItemIdentifier:atURL:withReplyHandler:;
- (void)renewReceiptForApplicationAtURL:withAppleID:password:forceSandbox:withCompletionHandler:;
+ (id)interface;
+ (id)sharedManager;
@end
