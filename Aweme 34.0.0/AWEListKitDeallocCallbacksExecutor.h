@interface AWEListKitDeallocCallbacksExecutor : NSObject
@property (nonatomic) NSMutableArray callbacks;
- (id)init;
- (void)dealloc;
- (id)callbacks;
- (void)setCallbacks:;
- (void).cxx_destruct;
- (void)addCallback:;
@end
