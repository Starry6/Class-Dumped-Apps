@interface IESLiveGiftTraySlideRateABConfig : NSObject
@property (nonatomic) IESLiveGiftTraySlideRateConfig config;
- (id)initWithDIContext:;
- (double)traySlideRateForHotInfo:price:;
- (BOOL)useSettingRate;
- (void)setConfig:;
- (void).cxx_destruct;
- (id)config;
@end
