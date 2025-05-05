@interface DMFOSStateHandler : NSObject
@property (nonatomic) @? block;
@property (nonatomic) NSString name;
@property (nonatomic) Q handle;
@property (nonatomic) NSObject<OS_os_transaction> transaction;
- (void)setTransaction:;
- (id)block;
- (id)transaction;
- (void)dealloc;
- (void)setName:;
- (unsigned long long)handle;
- (void)setHandle:;
- (id)initWithQueue:name:stateHandlerBlock:;
- (void).cxx_destruct;
- (void)setBlock:;
- (id)name;
- (id)_serializeState;
@end
