@interface CMCalorieUtils : NSObject
+ (BOOL)isAvailable;
+ (id)CLBodyMetricsFromCMCalorieUserInfo:error:;
+ (id)lookupCalorieDataForCMWorkoutType:duration:userInfo:error:;
+ (id)lookupCalorieDataForCMWorkoutType:duration:error:;
@end
