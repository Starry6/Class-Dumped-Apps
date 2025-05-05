@interface AVMediaDataRequester : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> requestQueue;
@property (nonatomic) @? requestBlock;
- (id)init;
- (void)dealloc;
- (id)requestQueue;
- (void)invalidate;
- (id)initWithMediaDataConsumer:requestQueue:requestBlock:;
- (void)startRequestingMediaData;
- (void)_setInvalidatePending;
- (BOOL)_isInvalidatePending;
- (void)_requestMediaDataIfReady;
- (id)requestBlock;
@end
