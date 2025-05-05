@interface EventToDictionaryConverter : NSObject
+ (id)eventTypeToNSString:;
+ (id)paramTypeToNSString:;
+ (id)convertEvents:;
@end
