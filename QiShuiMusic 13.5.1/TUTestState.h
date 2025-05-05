@interface TUTestState : NSObject
@property (nonatomic) NSInteger signalCount;
- (void)signal;
- (void)setObject:forKeyedSubscript:;
- (id)objectForKeyedSubscript:;
- (void).cxx_destruct;
- (id)description;
- (int)waitWithTimeout:;
- (void)incrementIntegerForKey:;
- (int)signalCount;
@end
