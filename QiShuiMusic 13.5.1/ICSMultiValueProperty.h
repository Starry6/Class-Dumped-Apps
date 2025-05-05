@interface ICSMultiValueProperty : ICSProperty
- (id)values;
- (BOOL)isMultiValued;
- (void)_ICSStringWithOptions:appendingToString:;
- (id)value;
- (id)initWithValue:type:;
- (void)setValues:valueType:;
- (void)setValue:type:;
- (void)_setParsedValues:type:;
@end
