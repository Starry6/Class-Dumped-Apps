@interface SAThreadStateKPerf : SAThreadState
@property (nonatomic) BOOL filledName;
@property (nonatomic) BOOL filledDispatchQueue;
@property (nonatomic) BOOL filledSwiftTask;
@property (nonatomic) BOOL filledUserStack;
@property (nonatomic) BOOL filledScheduling;
@property (nonatomic) BOOL filledCyclesInstructions;
@property (nonatomic) BOOL filledSnapshot;
@end
