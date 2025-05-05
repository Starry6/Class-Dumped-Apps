@interface TSPKDetectTask : NSObject
@property (nonatomic) TSPKDetectEvent detectEvent;
@property (nonatomic) BOOL onCurrentThread;
@property (nonatomic) TSPKContext context;
@property (nonatomic) <TSPKDetectTaskProtocol> delegate;
- (BOOL)onCurrentThread;
- (void)setDetectEvent:;
- (void)decodeParams:;
- (id)detectEvent;
- (id)initWithDetectEvent:;
- (void)markTaskFinish;
- (void)setOnCurrentThread:;
- (void)execute;
- (id)context;
- (void)setDelegate:;
- (void)setup;
- (id)delegate;
- (void).cxx_destruct;
- (void)setContext:;
@end
