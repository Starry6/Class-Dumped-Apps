@interface UISelectionFeedbackGenerator : UIFeedbackGenerator
@property (nonatomic) double lastSelectionChangeTime;
@property (nonatomic) _UISelectionFeedbackGeneratorConfiguration selectionConfiguration;
- (id)_stats_key;
- (void)selectionChanged;
- (void)userInteractionCancelled;
- (id)_selectionConfiguration;
- (void)userInteractionEnded;
- (void)_deactivated;
- (void)_playFeedbackWithSpeed:;
- (void)userInteractionStarted;
- (double)lastSelectionChangeTime;
- (void)setLastSelectionChangeTime:;
+ (Class)_configurationClass;
@end
