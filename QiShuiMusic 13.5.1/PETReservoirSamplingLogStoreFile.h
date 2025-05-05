@interface PETReservoirSamplingLogStoreFile : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)_unmap;
- (BOOL)changeLength:;
- (BOOL)attemptToRecreate;
- (BOOL)appendData:andReturnMapPointer:;
- (void)unlock;
- (BOOL)lock;
- (id)headerMap:;
- (id)remap:;
- (void).cxx_destruct;
- (id)initWithPath:;
- (unsigned long long)currentLength;
@end
