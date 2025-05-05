@interface ABVCardActivityAlertSerialization : NSObject
+ (id)stringWithType:info:;
+ (id)dictionaryWithType:info:;
+ (void)parseString:intoTypeAndInfo:;
+ (id)activityAlertWithString:;
+ (id)typeFromDictionary:;
+ (id)infoFromDictionary:;
@end
