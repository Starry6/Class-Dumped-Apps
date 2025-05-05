@interface EDPersistedMessageQueryIterator : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cancel;
- (BOOL)shouldCancel;
- (void)flush;
- (void).cxx_destruct;
- (void)addPersistedMessage:;
- (id)initWithMessagePersistence:query:batchSize:firstBatchSize:limit:handler:;
- (void)_processPersistedMessages:forceFlush:;
- (void)addPersistedMessages:;
@end
