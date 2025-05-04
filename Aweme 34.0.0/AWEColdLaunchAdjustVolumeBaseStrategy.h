@interface AWEColdLaunchAdjustVolumeBaseStrategy : NSObject
@property (nonatomic) double invalidVolume;
@property (nonatomic) <AWEColdLaunchAdjustVolumeStrategyProtocol> nextStrategy;
@property (nonatomic) NSDictionary info;
@property (nonatomic) NSArray config;
@property (nonatomic) NSDictionary volumeStrategy;
@property (nonatomic) BOOL considerEarphone;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)volumeStrategy;
- (id)initWithInfo:volumeStrategy:nextStrategy:;
- (double)adjustedVolume:;
- (BOOL)willIgnoreByDevice;
- (double)applyNext:;
- (double)invalidVolume;
- (double)applyVolumeStrategy:volume:;
- (void)setVolumeStrategy:;
- (id)initWithInfo:volumeStrategy:;
- (void)setNextStrategy:;
- (BOOL)considerEarphone;
- (id)nextStrategy;
- (void)setConfig:;
- (void)setInfo:;
- (id)info;
- (id)config;
- (void).cxx_destruct;
@end
