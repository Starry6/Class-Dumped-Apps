@interface AWENaviColorPickerSubOptionModel : MTLModel
@property (nonatomic) NSString colorHex;
@property (nonatomic) NSString colorKey;
@property (nonatomic) double sliderRatio;
@property (nonatomic) Q type;
@property (nonatomic) BOOL isMetal;
@property (nonatomic) BOOL passSlider;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)colorKey;
- (double)sliderRatio;
- (void)setSliderRatio:;
- (id)optionModel;
- (void)setIsMetal:;
- (BOOL)passSlider;
- (void)setPassSlider:;
- (void)setColorKey:;
- (id)colorMessage;
- (unsigned long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (id)colorHex;
- (void)setColorHex:;
- (BOOL)isMetal;
+ (id)subColorWithKey:hex:type:;
@end
