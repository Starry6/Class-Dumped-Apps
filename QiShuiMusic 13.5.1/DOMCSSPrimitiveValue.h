@interface DOMCSSPrimitiveValue : DOMCSSValue
@property (nonatomic) S primitiveType;
- (unsigned short)primitiveType;
- (id)getStringValue;
- (id)getRGBColorValue;
- (float)getFloatValue:;
- (void)setFloatValue:floatValue:;
- (void)setStringValue:stringValue:;
- (id)getCounterValue;
- (id)getRectValue;
- (void)setFloatValue::;
- (void)setStringValue::;
@end
