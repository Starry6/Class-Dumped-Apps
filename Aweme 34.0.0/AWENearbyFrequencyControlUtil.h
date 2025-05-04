@interface AWENearbyFrequencyControlUtil : NSObject
+ (long long)currentManuallyRecordCount:;
+ (void)manuallyRecordOnceWithKey:;
+ (BOOL)isAbleToExecuteWithFrequencyUpTo:timesEvery:naturalDaysWithKey:recordManually:;
+ (BOOL)isAbleToExecuteWithFrequencyUpTo:timesEvery:secondsWithKey:recordManually:;
+ (BOOL)executeUpTo:timesEvery:secondsWithKey:andAction:recordManually:;
+ (BOOL)executeUpTo:timesEvery:naturalDaysWithKey:andAction:recordManually:;
+ (BOOL)executeEqualTo:timesEvery:naturalDaysWithKey:andAction:recordManually:;
+ (BOOL)isAbleToExecuteWithFrequencyEqualTo:timesEvery:naturalDaysWithKey:recordManually:;
+ (id)__recordKeyWithKey:;
+ (BOOL)__isTimeValidForExecuteWithKey:allowedTimes:andTimeInterval:;
+ (void)__recordCalledOnceWithKey:;
+ (BOOL)__isTimeValidForExecuteWithKey:allowedTimes:numberOfNaturalDays:;
+ (BOOL)__isTimeValidForExecuteEquallyWithKey:allowedTimes:numberOfNaturalDays:;
+ (long long)__recordCalledOnceResultWithKey:;
+ (double)fqcForever;
+ (BOOL)executeUpTo:timesEvery:secondsWithKey:andAction:;
+ (BOOL)executeUpTo:timesEvery:naturalDaysWithKey:andAction:;
+ (BOOL)executeUpToOnceEveryNaturalDayWithKey:andAction:;
+ (BOOL)execureEqualTo:everyNaturalDayWithKey:andAction:;
+ (BOOL)isAbleToExecuteWithFrequencyUpTo:timesEvery:secondsWithKey:;
+ (BOOL)isAbleToExecuteWithFrequencyUpTo:timesEvery:naturalDaysWithKey:;
+ (long long)manuallyRecordResultWithKey:validNaturalDays:;
+ (void)resetRecordDataWithKey:;
@end
