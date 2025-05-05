@interface BDXDeallocObserver : NSObject
@property (nonatomic) NSMutableArray observers;
- (void)removeObserver:;
- (id)init;
- (void)addObserver:;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setObservers:;
- (id)observers;
@end
