@interface DESDeviceIdentifierStore : NSObject
@property (nonatomic) NSURL storeURL;
@property (nonatomic) NSMutableDictionary deviceIdentifiers;
- (id)storeURL;
- (void)_readIdentifierStore;
- (id)init;
- (id)identifierForBundleId:;
- (void)setDeviceIdentifiers:;
- (id)initWithStoreURL:;
- (void).cxx_destruct;
- (void)setStoreURL:;
- (id)deviceIdentifiers;
- (void)_writeIdentifierStore;
@end
