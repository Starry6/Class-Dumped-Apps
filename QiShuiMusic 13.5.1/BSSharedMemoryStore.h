@interface BSSharedMemoryStore : NSObject
@property (nonatomic) C _lastState;
@property (nonatomic) <BSSharedMemoryStoreData> data;
- (unsigned char)_lastState;
- (id)init;
- (void)dealloc;
- (id)data;
- (void)_setFailureModeForNextWrite:;
- (id)initWithIdentifier:dataClass:;
- (void).cxx_destruct;
- (void)setData:;
- (void)invalidate;
+ (void)_unlinkAllForIdentifier:;
+ (id)deserializeDataOfClass:withSerializedFromData:;
@end
