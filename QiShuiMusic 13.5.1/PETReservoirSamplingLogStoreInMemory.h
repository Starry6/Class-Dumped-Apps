@interface PETReservoirSamplingLogStoreInMemory : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (BOOL)changeLength:;
- (BOOL)attemptToRecreate;
- (BOOL)appendData:andReturnMapPointer:;
- (void)unlock;
- (BOOL)lock;
- (id)headerMap:;
- (id)remap:;
- (void).cxx_destruct;
- (unsigned long long)currentLength;
@end
