@interface AWEFeedProgressABConfig : NSObject
+ (BOOL)optimizeProgressBigFont;
+ (BOOL)enableProgressDragOpt;
+ (BOOL)enableProgressStopLoading;
+ (BOOL)enableProgressContinueOpt;
+ (BOOL)enableSeekBarTrackProgress;
+ (BOOL)enableEnlargePreview;
+ (double)getEnlargePreviewRatio;
+ (double)getAdsorptionRange;
+ (double)getAdsorptionMinDuration;
+ (id)seekBarTrackProgressDict;
+ (id)progressEnlargePreviewDict;
+ (id)sharedInstance;
@end
