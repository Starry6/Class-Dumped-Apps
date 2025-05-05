@interface BUNetMonitorData : NSObject
@property (nonatomic) BUPolicyDataUnit dataUnit;
@property (nonatomic) NSOperationQueue queue;
- (id)dataUnit;
- (void)logRtt:identifer:start:end:;
- (void)removeOutdata;
- (void)setDataUnit:;
- (id)initWithName:;
- (void)setup;
- (void).cxx_destruct;
- (void)setQueue:;
- (id)queue;
@end
