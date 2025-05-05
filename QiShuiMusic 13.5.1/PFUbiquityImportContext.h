@interface PFUbiquityImportContext : NSObject
- (id)init;
- (void)dealloc;
- (id)initWithStoreName:andUbiquityRootLocation:withLocalPeerID:;
- (id)initWithStack:andStoreMetadata:;
@end
