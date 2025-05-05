@interface EspressoProfilingNetworkANEInfo : NSObject
@property (nonatomic) Q total_ane_time_ns;
@property (nonatomic) Q ane_time_per_eval_ns;
- (unsigned long long)total_ane_time_ns;
- (void)setTotal_ane_time_ns:;
- (unsigned long long)ane_time_per_eval_ns;
- (void)setAne_time_per_eval_ns:;
@end
