@interface RACKVOChannel : RACChannel
@property (nonatomic) NSObject target;
@property (nonatomic) NSString keyPath;
@property (nonatomic) RACKVOChannelData currentThreadData;
- (void)createCurrentThreadData;
- (id)currentThreadData;
- (void)destroyCurrentThreadData;
- (id)initWithTarget:keyPath:nilValue:;
- (void)setObject:forKeyedSubscript:;
- (void)setTarget:;
- (id)objectForKeyedSubscript:;
- (id)keyPath;
- (void).cxx_destruct;
- (id)target;
@end
