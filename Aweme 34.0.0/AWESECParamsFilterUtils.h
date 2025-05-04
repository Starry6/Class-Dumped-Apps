@interface AWESECParamsFilterUtils : NSObject
+ (id)paramsTypeDict:;
+ (id)filterParams:eventType:;
+ (id)queryIncludeKeysByEventType:;
+ (id)convertStringQueryValueToType:;
+ (BOOL)isPrefixAllDigits:bits:;
+ (id)paramsFilterSettings;
+ (id)filterRuleByEventType:;
@end
