@interface CSDataWrapper : NSObject
@property (nonatomic) NSData data;
@property (nonatomic) NSObject<OS_xpc_object> xpcData;
@property (nonatomic) r^v dataPtr;
@property (nonatomic) Q dataSize;
@property (nonatomic) Q mapSize;
@property (nonatomic) BOOL mapped;
- (void)dealloc;
- (unsigned long long)dataSize;
- (id)data;
- (id)dataPtr;
- (unsigned long long)mapSize;
- (id)initWithData:;
- (id)initWithXPCValue:;
- (id)initWithXPCValue:allowWritableSharedMemory:;
- (void).cxx_destruct;
- (void)setDataSize:;
- (BOOL)mapped;
- (id)xpcData;
@end
