@interface RACTestSchedulerAction : NSObject
@property (nonatomic) NSDate date;
@property (nonatomic) @? block;
@property (nonatomic) RACDisposable disposable;
- (id)disposable;
- (id)block;
- (id)date;
- (id)initWithDate:block:;
- (void).cxx_destruct;
- (id)description;
@end
