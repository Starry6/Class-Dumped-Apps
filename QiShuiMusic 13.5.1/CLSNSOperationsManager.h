@interface CLSNSOperationsManager : NSObject
- (id)init;
- (void)addOperation:;
- (void)unlock;
- (void)lock;
- (void)removeOperation:;
- (void).cxx_destruct;
- (unsigned long long)count;
- (void)performOperation:onOperationQueue:withTimeOut:;
@end
