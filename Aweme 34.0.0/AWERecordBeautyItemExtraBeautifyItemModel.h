@interface AWERecordBeautyItemExtraBeautifyItemModel : NSObject
@property (nonatomic) q realMinValue;
@property (nonatomic) q realMaxValue;
@property (nonatomic) q convertedMinValue;
@property (nonatomic) q convertedMaxValue;
@property (nonatomic) q convertedDefaultValue;
@property (nonatomic) q realDefaultValue;
@property (nonatomic) BOOL isDoubleDirection;
@property (nonatomic) NSString tag;
@property (nonatomic) NSString name;
- (BOOL)isDoubleDirection;
- (long long)realMinValue;
- (long long)realMaxValue;
- (long long)convertedDefaultValue;
- (long long)realDefaultValue;
- (long long)convertedMinValue;
- (long long)convertedMaxValue;
- (long long)convertRealValueToConvertedValue:;
- (void)convertRealValueToConvertedValue;
- (long long)convertValue:sourceMinValue:sourceMaxValue:targetMinValue:targetMaxValue:;
- (long long)convertConvertedValueToRealValue:;
- (void)setRealMinValue:;
- (void)setRealMaxValue:;
- (void)setRealDefaultValue:;
- (id)tag;
- (void).cxx_destruct;
- (id)initWithDict:;
- (id)name;
@end
