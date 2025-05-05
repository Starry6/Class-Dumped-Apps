@interface WBSTranslationScrollInteractionAnalyticsHelper : NSObject
@property (nonatomic) @? submissionHandler;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)submissionHandler;
- (void)setSubmissionHandler:;
- (void)recordFirstInteractionIfNeeded;
- (void)updateMaxVisibleHeightPercentage:;
- (void)_calculateFirstInteractionDelayAndMaxPercentageWithCompletion:;
@end
