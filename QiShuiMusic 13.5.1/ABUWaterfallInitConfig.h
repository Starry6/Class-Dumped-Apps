@interface ABUWaterfallInitConfig : NSObject
@property (nonatomic) ABUMediationSlotConfig mediationSlotConfig;
@property (nonatomic) <ABUMediationWaterfallDelegate> waterfallDelegate;
@property (nonatomic) NSDictionary mediaSlotConfigs;
@property (nonatomic) ABUMediaSlotConfigGroup mediaSlotConfigGroup;
@property (nonatomic) ABUAdLoadConfig loadConfig;
- (id)loadConfig;
- (id)mediaSlotConfigGroup;
- (id)mediaSlotConfigs;
- (id)mediationSlotConfig;
- (void)setLoadConfig:;
- (void)setMediaSlotConfigGroup:;
- (void)setMediaSlotConfigs:;
- (void)setMediationSlotConfig:;
- (void)setWaterfallDelegate:;
- (id)waterfallDelegate;
- (void).cxx_destruct;
@end
