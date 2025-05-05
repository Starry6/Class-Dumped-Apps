@interface JPCallbackStream : JPStream
@property (nonatomic) @? readCallback;
@property (nonatomic) @? seekForwardCallback;
@property (nonatomic) @? seekToEndCallback;
- (id)readCallback;
- (id)seekToEndCallback;
- (id)initWithReadCallback:seekForwardCallback:seekToEndCallback:;
- (void)setSeekForwardCallback:;
- (void).cxx_destruct;
- (void)setReadCallback:;
- (void)setSeekToEndCallback:;
- (id)seekForwardCallback;
@end
