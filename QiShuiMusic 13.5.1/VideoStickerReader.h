@interface VideoStickerReader : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> operationQueue;
- (void)addNoti;
- (void)reStart;
- (void)readAll;
- (id)initWithUrl:nFlags:fullLinkGPU:;
- (void)becomeUnActive;
- (void)createReaderAndDecoder:;
- (BOOL)getFileInfo:size:;
- (id)getNextStickFrame;
- (void)removeNoti;
- (void)runInOperationQueue:;
- (id)seek:i64TimeTolerance:nFlags:;
- (void)becomeActive;
- (void)dealloc;
- (id)operationQueue;
- (void).cxx_destruct;
- (void)setOperationQueue:;
@end
