@interface IESMMDeviceAuthor : NSObject
+ (BOOL)checkCategoryCanbePlay;
+ (BOOL)checkPlayBackAndRecordCategory;
+ (BOOL)checkPlayBackAndRecordCategoryWithCategoryOption:;
+ (BOOL)checkPlayBackCategory;
+ (id)getPortTypeInString;
+ (unsigned long long)reduceCategoryOption:;
+ (BOOL)isMicNowAvailableV2;
+ (BOOL)deactiveAudioSession;
+ (void)setCustomPlayBackCategoryOption:;
+ (void)setCustomPlayBackAndRecordCategoryOption:;
+ (void)allowMixAudioWithOthersDuringRecord:;
@end
