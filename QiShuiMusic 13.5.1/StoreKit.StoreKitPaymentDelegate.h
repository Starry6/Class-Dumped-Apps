@interface StoreKit.StoreKitPaymentDelegate : SwiftNativeNSObject
- (id)init;
- (void)handleEngagementRequest:replyBlock:;
- (void)shouldContinueTransactionWithNewStorefront:replyBlock:;
@end
