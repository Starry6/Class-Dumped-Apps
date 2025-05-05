@interface IESLivePrefSampleAnrInfo : NSObject
@property (nonatomic) NSNumber count;
@property (nonatomic) NSNumber duration_sum;
@property (nonatomic) NSNumber duration_max;
- (id)duration_max;
- (id)duration_sum;
- (void)setDuration_max:;
- (void)setDuration_sum:;
- (void)setCount:;
- (void).cxx_destruct;
- (id)count;
@end
