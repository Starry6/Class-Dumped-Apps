@interface CDRemoveEventsConsumer : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) @? consumer;
@property (nonatomic) ^{__FSEventStream=} stream;
@property (nonatomic) NSObject<OS_dispatch_semaphore> sem;
@property (nonatomic) NSObject<OS_dispatch_queue> consumer_q;
@property (nonatomic) NSString volume;
@property (nonatomic) BOOL historyDone;
@property (nonatomic) {fsid=[2i]} fsid;
@property (nonatomic) Q since;
- (id)stream;
- (void)setStream:;
- (id)consumer;
- (void)setSince:;
- (id)volume;
- (void)dealloc;
- (void)consumeStream:forVolume:;
- (id)fsid;
- (void)setVolume:;
- (id)identifier;
- (void)setSem:;
- (void)setFsid:;
- (unsigned long long)since;
- (void)callback:;
- (void).cxx_destruct;
- (void)setConsumer_q:;
- (void)setHistoryDone:;
- (id)sem;
- (BOOL)historyDone;
- (void)setIdentifier:;
- (id)initWithConsumer:identifier:;
- (void)setConsumer:;
- (id)consumer_q;
@end
