@interface AWERxStoreManager : NSObject
- (id).cxx_construct;
- (void).cxx_destruct;
+ (id)registerStore:forModule:;
+ (id)storeOfModule:;
@end
