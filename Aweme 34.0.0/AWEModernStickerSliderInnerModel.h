@interface AWEModernStickerSliderInnerModel : NSObject
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) NSNumber currentValue;
@property (nonatomic) NSNumber defaultValue;
@property (nonatomic) NSNumber minValue;
@property (nonatomic) NSNumber maxValue;
@property (nonatomic) float defaultRatio;
- (float)defaultRatio;
- (id)defaultValue;
- (void)setDefaultValue:;
- (void)setIsEnabled:;
- (void)setMaxValue:;
- (id)minValue;
- (void)setCurrentValue:;
- (void)setMinValue:;
- (void).cxx_destruct;
- (id)currentValue;
- (BOOL)isEnabled;
- (id)maxValue;
@end
