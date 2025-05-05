@interface PFUbiquityImportOperation : NSOperation
@property (nonatomic) NSObject delegate;
- (id)init;
- (void)cancel;
- (void)dealloc;
- (void)setDelegate:;
- (id)delegate;
- (id)description;
- (id)retainedDelegate;
- (void)storeWillBeRemoved:;
- (id)initWithPersistentStore:localPeerID:andUbiquityRootLocation:;
- (id)initWithStoreName:localPeerID:andUbiquityRootLocation:;
@end
