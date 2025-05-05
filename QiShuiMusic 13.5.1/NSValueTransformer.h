@interface NSValueTransformer : NSObject
- (id)mtl_invertedTransformer;
- (id)init;
- (id)transformedValue:;
- (id)reverseTransformedValue:;
- (id)_initForFoundationOnly;
+ (id)mtl_arrayMappingTransformerWithTransformer:;
+ (id)mtl_validatingTransformerForClass:;
+ (id)mtl_valueMappingTransformerWithDictionary:defaultValue:reverseDefaultValue:;
+ (id)mtl_valueMappingTransformerWithDictionary:;
+ (id)mtl_dateTransformerWithDateFormat:calendar:locale:timeZone:defaultDate:;
+ (id)mtl_dateTransformerWithDateFormat:locale:;
+ (id)mtl_numberTransformerWithNumberStyle:locale:;
+ (id)mtl_transformerWithFormatter:forObjectClass:;
+ (id)mtl_JSONDictionaryTransformerWithModelClass:;
+ (id)mtl_JSONArrayTransformerWithModelClass:;
+ (id)ieslivesaas_mtl_numberTransformer;
+ (id)ieslivesaas_mtl_stringTransformer;
+ (id)mtl_numberTransformer;
+ (id)mtl_stringTransformer;
+ (long long)_intents_valueType;
+ (Class)_intents_resolutionResultClass;
+ (id)if_transformerUsingForwardTransformation:reverseTransformation:;
+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;
+ (void)setValueTransformer:forName:;
+ (id)valueTransformerForName:;
+ (id)valueTransformerNames;
@end
