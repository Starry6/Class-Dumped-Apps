@interface CNVCardLine30SerializationStrategy : CNVCardLineSerializationStrategyImpl
- (void)serializeString:;
- (void)serializeData:;
- (void)serializeParameters:;
- (void)serializeVersionPlaceholder;
- (void)serializeArray:withItemSeparator:;
- (void)willSerializeValue;
- (void)serializeGroupingName:;
- (void)serializeGroupedLines:withGroupingName:;
- (void)_addAutomagicParametersForData:;
- (id)detectedTypeOfData:;
@end
