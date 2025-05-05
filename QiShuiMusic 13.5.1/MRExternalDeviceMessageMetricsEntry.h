@interface MRExternalDeviceMessageMetricsEntry : NSObject
@property (nonatomic) Q avg;
@property (nonatomic) Q min;
@property (nonatomic) Q max;
@property (nonatomic) Q total;
@property (nonatomic) NSMutableArray values;
- (id)init;
- (id)values;
- (unsigned long long)min;
- (void)updateWithValue:;
- (unsigned long long)max;
- (void).cxx_destruct;
- (void)setMax:;
- (id)description;
- (unsigned long long)total;
- (void)setValues:;
- (void)setMin:;
- (unsigned long long)avg;
- (void)setAvg:;
- (void)setTotal:;
@end
