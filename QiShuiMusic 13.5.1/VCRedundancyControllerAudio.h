@interface VCRedundancyControllerAudio : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)updateRedundancyStrategyWithNetworkStatistics:;
- (void)reportRedundancyPercentage:redundancyInterval:;
- (void)unregisterStatistics;
- (id)initWithDelegate:statisticsCollector:mode:;
@end
