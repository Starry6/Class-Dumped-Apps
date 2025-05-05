@interface MFProgressFilterDataConsumer : MFBaseFilterDataConsumer
@property (nonatomic) @? progressBlock;
@property (nonatomic) Q expectedSize;
- (id)progressBlock;
- (void)setProgressBlock:;
- (long long)appendData:;
- (void).cxx_destruct;
- (id)initWithConsumer:expectedSize:;
- (id)initWithConsumers:expectedSize:;
- (unsigned long long)expectedSize;
@end
