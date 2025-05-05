@interface OSLogEventStreamBase : NSObject
@property (nonatomic) Q flags;
@property (nonatomic) NSPredicate filterPredicate;
@property (nonatomic) NSObject<OS_dispatch_queue> target;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) @? streamHandler;
@property (nonatomic) I invalidated;
@property (nonatomic) @? invalidationHandler;
- (id)init;
- (unsigned int)invalidated;
- (void)setEventHandler:;
- (void)setTarget:;
- (id)streamHandler;
- (void)setInvalidated:;
- (void).cxx_destruct;
- (id)target;
- (id)invalidationHandler;
- (void)setInvalidationHandler:;
- (void)setQueue:;
- (void)setFlags:;
- (id)filterPredicate;
- (unsigned long long)flags;
- (void)setStreamHandler:;
- (void)setFilterPredicate:;
- (id)queue;
- (void)invalidate;
@end
