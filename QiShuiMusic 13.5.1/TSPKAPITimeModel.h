@interface TSPKAPITimeModel : NSObject
@property (nonatomic) double customAPICallTime;
@property (nonatomic) double systemAPIBeginTime;
@property (nonatomic) double systemAPIEndTime;
- (double)customAPICallTime;
- (double)customAPICostTime;
- (void)setCustomAPICallTime:;
- (void)setSystemAPIBeginTime:;
- (void)setSystemAPIEndTime:;
- (double)systemAPIBeginTime;
- (double)systemAPICostTime;
- (double)systemAPIEndTime;
- (void)clear;
@end
