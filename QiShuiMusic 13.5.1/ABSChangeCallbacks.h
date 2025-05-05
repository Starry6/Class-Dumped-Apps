@interface ABSChangeCallbacks : NSObject
- (void)dealloc;
- (void)contactStoreChanged:;
- (id)initWithAddressBook:;
- (void).cxx_destruct;
- (void)addExternalCallback:onThread:withContext:;
- (BOOL)hasExternalCallback:onThread:withContext:;
- (void)removeExternalCallback:withContext:;
@end
