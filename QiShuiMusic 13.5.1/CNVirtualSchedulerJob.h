@interface CNVirtualSchedulerJob : NSObject
@property (nonatomic) Q time;
@property (nonatomic) @? block;
- (id)block;
- (void)setTime:;
- (unsigned long long)time;
- (void).cxx_destruct;
- (id)description;
- (id)initWithTime:block:;
+ (id)jobWithTime:block:;
@end
