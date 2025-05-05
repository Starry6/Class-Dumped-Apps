@interface HMDNetTrafficIntervalUsageModel : NSObject
@property (nonatomic) NSArray largeRequest;
@property (nonatomic) NSArray highFrequencyRequest;
@property (nonatomic) NSArray largeImage;
@property (nonatomic) NSArray businessUsage;
- (id)businessUsage;
- (id)groupByNetType;
- (id)highFrequencyRequest;
- (id)largeRequest;
- (void)setBusinessUsage:;
- (void)setHighFrequencyRequest:;
- (void)setLargeRequest:;
- (void).cxx_destruct;
- (id)largeImage;
- (void)setLargeImage:;
@end
