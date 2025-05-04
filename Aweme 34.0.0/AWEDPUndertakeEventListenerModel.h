@interface AWEDPUndertakeEventListenerModel : NSObject
@property (nonatomic) NSMutableArray events;
@property (nonatomic) @? checkBlock;
@property (nonatomic) @? handlerBlock;
- (void)setCheckBlock:;
- (id)checkBlock;
- (void)setEvents:;
- (id)init;
- (id)handlerBlock;
- (id)events;
- (void)setHandlerBlock:;
- (void).cxx_destruct;
@end
