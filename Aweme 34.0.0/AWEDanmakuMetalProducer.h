@interface AWEDanmakuMetalProducer : NSObject
@property (nonatomic) AWEDanmakuDrawBufferPool drawBufferPool;
- (void)addDanmaku:;
- (void)removeDanmaku:;
- (void)setDrawBufferPool:;
- (id)drawBufferPool;
- (id)initWithDanmakuBufferPool:;
- (void)dealloc;
- (void).cxx_destruct;
@end
