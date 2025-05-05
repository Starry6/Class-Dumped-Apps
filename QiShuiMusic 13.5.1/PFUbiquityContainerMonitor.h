@interface PFUbiquityContainerMonitor : NSObject
- (id)init;
- (void)dealloc;
- (id)description;
- (void)containerDeleteDetected:;
- (void)_applicationResumed:;
- (void)ubiquityIdentityChanged:;
- (id)initWithProcessingQueue:localPeerID:storeName:andUbiquityRootLocation:;
@end
