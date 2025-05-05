@interface PFUbiquitySwitchboardEntry : NSObject
- (id)init;
- (void)dealloc;
- (id)description;
- (void)filePresenterWasNotifiedTransactionLogs:;
- (void)filePresenterNoticedBaselineFileChange:;
- (void)containerIdentifierChanged:;
- (id)initWithLocalPeerID:storeName:withURL:ubiquityRootLocation:andLocalRootLocation:;
@end
