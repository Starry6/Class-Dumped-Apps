@interface PFUbiquityTransactionLog : NSObject
- (id)init;
- (void)dealloc;
- (id)description;
- (id)initWithTransactionLogURL:ubiquityRootLocation:andLocalPeerID:;
- (id)initWithTransactionLogLocation:andLocalPeerID:;
- (id)initWithStoreName:andSaveSnapshot:andRootLocation:;
@end
