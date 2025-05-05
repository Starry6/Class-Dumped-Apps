@interface IESIMDateTime : NSObject
+ (id)customtimeStringSince1970:;
+ (id)customtimeStringSince1970:formateType:;
+ (id)customtimeStringSince1970:formateType:showType:;
+ (id)customtimeStringSince1970:midnightInterval:;
+ (id)customtimeStringSince1970:midnightInterval:formateType:;
+ (id)customtimeStringSince1970:midnightInterval:formateType:showType:;
+ (id)customtimeStringSince1970:showType:;
+ (id)dateStringSince:;
+ (long long)daysFromDate:toDateTime:;
+ (id)formateDateStringSince:formaterType:;
+ (id)noDateStringSince:;
+ (id)noTimeStringSince1970:;
+ (id)noTimeStringSince:;
+ (id)onlyDateStringSince:;
+ (id)simpleDateStringSince:;
+ (long long)daysBetweenDate:andDate:;
@end
