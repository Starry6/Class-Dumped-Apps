@interface CUKalmanConfiguration : NSObject
@property (nonatomic) double paramR;
@property (nonatomic) double paramQ;
@property (nonatomic) double paramA;
@property (nonatomic) double paramB;
@property (nonatomic) double paramC;
- (double)paramQ;
- (double)paramA;
- (double)paramB;
- (double)paramC;
- (id)initWithParamR:paramQ:paramA:paramB:paramC:;
- (double)paramR;
+ (id)defaultConfiguration;
+ (id)bluetoothRSSIConfiguration;
@end
