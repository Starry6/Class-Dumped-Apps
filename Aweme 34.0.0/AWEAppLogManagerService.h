@interface AWEAppLogManagerService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setAppLogFrequencyWithModel:;
- (double)retention_thresh;
- (long long)v_raw;
- (id)unique_key;
- (id)caller;
- (long long)alpha;
- (long long)mode;
- (double)beta;
@end
