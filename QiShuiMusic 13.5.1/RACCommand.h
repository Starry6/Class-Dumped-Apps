@interface RACCommand : NSObject
@property (nonatomic) RACSubject addedExecutionSignalsSubject;
@property (nonatomic) RACSubject allowsConcurrentExecutionSubject;
@property (nonatomic) RACSignal immediateEnabled;
@property (nonatomic) @? signalBlock;
@property (nonatomic) RACSignal executionSignals;
@property (nonatomic) RACSignal executing;
@property (nonatomic) RACSignal enabled;
@property (nonatomic) RACSignal errors;
@property (nonatomic) BOOL allowsConcurrentExecution;
- (id)addedExecutionSignalsSubject;
- (BOOL)allowsConcurrentExecution;
- (id)allowsConcurrentExecutionSubject;
- (id)executionSignals;
- (id)immediateEnabled;
- (id)initWithEnabled:signalBlock:;
- (id)initWithSignalBlock:;
- (void)setAllowsConcurrentExecution:;
- (id)signalBlock;
- (id)init;
- (id)executing;
- (void)dealloc;
- (id)enabled;
- (id)execute:;
- (void).cxx_destruct;
- (id)errors;
@end
