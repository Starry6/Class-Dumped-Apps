@interface EKAlarmSemanticIdentifierGenerator : NSObject
+ (id)semanticIdentifierForAlarm:;
+ (id)semanticIdentifierForAlarmIsDefault:absoluteDate:relativeOffset:emailAddress:url:;
+ (id)_stringForAlarmProximity:;
@end
