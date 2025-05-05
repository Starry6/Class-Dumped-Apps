@interface LSTimestampUtils : NSObject
+ (id)TimeStampOffset:withSamples:withSamplerate:;
+ (void)correctTimeStampHostTime:withSamples:withSamplerate:;
+ (double)getDurationMicroSecondTime:;
+ (double)machTimeToMicroSecs:;
@end
