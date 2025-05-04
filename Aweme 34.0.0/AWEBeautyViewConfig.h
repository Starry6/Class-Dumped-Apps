@interface AWEBeautyViewConfig : NSObject
@property (nonatomic) AWEBeautyItemConfig itemConfig;
@property (nonatomic) AWEBeautyPanelConfig panelConfig;
@property (nonatomic) AWEBeautySliderConfig sliderConfig;
- (void)setItemConfig:;
- (id)itemConfig;
- (id)panelConfig;
- (void)setPanelConfig:;
- (void)setSliderConfig:;
- (id)sliderConfig;
- (id)init;
- (void).cxx_destruct;
@end
