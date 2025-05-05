@interface CNVCardLine21SerializationStrategy : CNVCardLineSerializationStrategyImpl
- (id)initWithStorage:;
- (void)serializeString:;
- (void).cxx_destruct;
- (void)serializeData:;
- (void)serializeParameters:;
- (void)serializeVersionPlaceholder;
- (void)serializeArray:withItemSeparator:;
- (void)serializeGroupedLines:withGroupingName:;
- (void)_addAutomagicParametersForData:;
- (id)detectedTypeOfData:;
- (id)initWithStorage:encodings:;
- (id)necessaryEncodingForValue:;
+ (id)serializerWithStorage:encodings:;
@end
