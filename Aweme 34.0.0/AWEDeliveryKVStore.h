@interface AWEDeliveryKVStore : NSObject
@property (nonatomic) <AWEECOMIMPaasKVStoreProtocol> kvStore;
- (void)setKvStore:;
- (void)setBool:forKey:;
- (id)kvStore;
- (void).cxx_destruct;
- (BOOL)boolForKey:;
+ (id)shared;
@end
