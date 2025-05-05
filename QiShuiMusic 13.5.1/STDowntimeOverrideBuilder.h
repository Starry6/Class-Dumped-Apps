@interface STDowntimeOverrideBuilder : NSObject
+ (id)createFixedDurationOverrideWithInterval:state:creationDate:calendar:;
+ (id)createAutomaticOverrideWithState:schedule:creationDate:calendar:;
@end
