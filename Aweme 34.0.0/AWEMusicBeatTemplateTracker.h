@interface AWEMusicBeatTemplateTracker : NSObject
+ (void)trackFetchTemplateDetailSuccessWithTemplateID:awemeID:logID:error:;
+ (void)trackSlotsInfoCorrectWithTemplateID:awemeID:minSegNum:maxSegNum:originSegNum:;
@end
