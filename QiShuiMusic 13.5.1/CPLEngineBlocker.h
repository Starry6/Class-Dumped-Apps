@interface CPLEngineBlocker : NSObject
@property (nonatomic) CPLEngineWriteTransactionBlocker writeTransactionBlocker;
@property (nonatomic) CPLEngineSchedulerBlocker schedulerBlocker;
- (void)dealloc;
- (void)unblock;
- (void).cxx_destruct;
- (id)initWithWriteTransactionBlocker:schedulerBlocker:;
- (id)writeTransactionBlocker;
- (id)schedulerBlocker;
@end
