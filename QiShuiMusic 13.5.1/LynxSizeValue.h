@interface LynxSizeValue : NSObject
@property (nonatomic) Q type;
@property (nonatomic) double value;
- (double)convertToDevicePtWithFullSize:;
- (id)initWithType:value:;
- (id)init;
- (void)setType:;
- (void)setValue:;
- (unsigned long long)type;
- (double)value;
+ (id)sizeValueFromCSSString:;
@end
