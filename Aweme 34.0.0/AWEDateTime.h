@interface AWEDateTime : NSObject
+ (id)simpleDateStringSince:;
+ (id)onlyDateStringSince:;
+ (id)dateStringSince:;
+ (id)customtimeStringSince1970:formateType:;
+ (id)customtimeStringSince1970:formateType:showType:;
+ (id)customtimeStringSince1970:midnightInterval:formateType:showType:;
+ (id)customtimeStringSince1970:midnightInterval:formateType:;
+ (id)formateDateStringSince:formaterType:;
+ (id)noTimeStringSince:;
+ (id)noDateStringSince:;
+ (long long)daysFromDate:toDateTime:;
+ (id)noTimeStringSince1970:;
+ (id)customtimeStringSince1970:;
+ (id)customtimeStringSince1970:showType:;
+ (id)customtimeStringSince1970:midnightInterval:;
+ (long long)daysBetweenDate:andDate:;
@end
