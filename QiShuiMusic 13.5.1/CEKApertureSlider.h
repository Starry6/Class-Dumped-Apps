@interface CEKApertureSlider : CEKDiscreteSlider
@property (nonatomic) Q _minimumApertureIndex;
@property (nonatomic) Q _maximumApertureIndex;
@property (nonatomic) NSNumberFormatter _decimalFormatter;
@property (nonatomic) NSNumberFormatter _wholeNumberFormatter;
@property (nonatomic) double apertureValue;
@property (nonatomic) double minimumApertureValue;
@property (nonatomic) double maximumApertureValue;
@property (nonatomic) double markedApertureValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)_decimalFormatter;
- (id)valueText;
- (double)apertureValue;
- (void)setMarkedApertureValueClosestTo:;
- (void)setMinimumApertureValueClosestTo:maximumApertureValueClosestTo:;
- (double)markedApertureValue;
- (double)minimumApertureValue;
- (double)maximumApertureValue;
- (void)setApertureValueClosestTo:;
- (double)horizontalValueLabelOffset;
- (id)_wholeNumberFormatter;
- (void)_updateMainTickMarkOffset;
- (void)setMarkedApertureValueToNone;
- (unsigned long long)_validApertureIndexForDiscreteIndex:;
- (unsigned long long)_discreteIndexForValidApertureIndex:;
- (unsigned long long)_indexOfClosestValidValueForAperture:;
- (unsigned long long)_minimumApertureIndex;
- (void)_setMinimumApertureIndex:;
- (unsigned long long)_maximumApertureIndex;
- (void)_setMaximumApertureIndex:;
+ (id)validApertureValues;
+ (unsigned long long)firstFullStopIndexAfterOrIncludingIndex:;
+ (BOOL)isValidApertureIndexFullStop:;
+ (BOOL)isValidApertureIndex:;
@end
