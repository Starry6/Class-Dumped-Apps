@interface VCRedundancyControllerVideo : NSObject
@property (nonatomic) Q statisticsID;
@property (nonatomic) NSArray fecLevelPerFrameSizeVector;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)setBtNotificationMonitor;
- (void)loadDefaultSettings;
- (void)updateRedundancyStrategyWithNetworkStatistics:;
- (id)initWithDelegate:mode:parameters:;
- (void)reportRedundancyPercentage:redundancyInterval:;
- (void)resetRedundancyStrategy:;
- (unsigned long long)statisticsID;
- (void)setStatisticsID:;
- (id)fecLevelPerFrameSizeVector;
+ (double)convertRedundancyPercentageToRatio:;
@end
