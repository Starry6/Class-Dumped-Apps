@interface IESLiveMessageListValueStrategyConfig : NSObject
@property (nonatomic) IESLiveMessageListDisplayRatioConfig lowHeatRefreshConfig;
@property (nonatomic) IESLiveMessageListDisplayRatioConfig middleHeatRefreshConfig;
@property (nonatomic) IESLiveMessageListDisplayRatioConfig highHeatRefreshConfig;
@property (nonatomic) IESLiveMessageListDisplayRatioConfig lowHeatFoldConfig;
@property (nonatomic) IESLiveMessageListDisplayRatioConfig middleHeatFoldConfig;
@property (nonatomic) IESLiveMessageListDisplayRatioConfig highHeatFoldConfig;
- (id)highHeatFoldConfig;
- (id)highHeatRefreshConfig;
- (id)lowHeatFoldConfig;
- (id)lowHeatRefreshConfig;
- (id)middleHeatFoldConfig;
- (id)middleHeatRefreshConfig;
- (void)setConfig:withRatio:;
- (void)setHighHeatFoldConfig:;
- (void)setHighHeatRefreshConfig:;
- (void)setLowHeatFoldConfig:;
- (void)setLowHeatRefreshConfig:;
- (void)setMiddleHeatFoldConfig:;
- (void)setMiddleHeatRefreshConfig:;
- (id)init;
- (void).cxx_destruct;
@end
