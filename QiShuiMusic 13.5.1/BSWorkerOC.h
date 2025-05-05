@interface BSWorkerOC : NSObject
@property (nonatomic) JsWorkerIOS worker;
- (void)configWorkerSpace:;
- (void).cxx_destruct;
- (id)worker;
- (void)setWorker:;
+ (id)shareInstance;
@end
