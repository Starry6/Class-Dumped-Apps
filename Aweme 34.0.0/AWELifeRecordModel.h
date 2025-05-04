@interface AWELifeRecordModel : NSObject
@property (nonatomic) q currTimes;
@property (nonatomic) q leasetTimes;
@property (nonatomic) q leasetDuration;
- (id)initWithLeasetTimes:leasetDuration:;
- (long long)currTimes;
- (void)setCurrTimes:;
- (long long)leasetTimes;
- (long long)leasetDuration;
- (id)initWithLeasetTimes:;
- (void)setLeasetTimes:;
- (void)setLeasetDuration:;
@end
