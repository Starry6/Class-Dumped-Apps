@interface ASCJitterBackoff : NSObject
@property (nonatomic) ASCExponentialBackoff exponentialBackoff;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (void)reset;
- (double)nextSleepTimeInterval;
- (id)initWithBaseSleepTimeInterval:maxSleepTimeInterval:;
- (id)exponentialBackoff;
@end
