@interface NSJSONSerialization : NSObject
- (id)init;
+ (id)abu_dataJsonSerializationWithObject:options:error:;
+ (id)abu_stringJsonSerializationWithObject:options:error:;
+ (void)bu_async_reportStatsWithObject:;
+ (id)buV2_cleanInvalidValues:;
+ (id)buV2_dataJsonSerializationWithObject:options:error:;
+ (id)buV2_removeNanValue:;
+ (void)buV2_reportWithReason:;
+ (id)bu_dataJsonSerializationWithObject:options:error:;
+ (void)bu_reportStatsWithObject:;
+ (id)bu_stringJsonSerializationWithObject:options:error:;
+ (id)bda_arrayWithJSONData:error:;
+ (id)bda_arrayWithJSONString:error:;
+ (id)bda_dictionaryWithJSONData:error:;
+ (id)bda_dictionaryWithJSONString:error:;
+ (id)allocWithZone:;
+ (id)dataWithJSONObject:options:error:;
+ (id)JSONObjectWithData:options:error:;
+ (BOOL)isValidJSONObject:;
+ (long long)writeJSONObject:toStream:options:error:;
+ (id)JSONObjectWithStream:options:error:;
@end
