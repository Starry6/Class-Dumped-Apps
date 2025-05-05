@interface UINotificationFeedbackGenerator : UIFeedbackGenerator
@property (nonatomic) _UINotificationFeedbackGeneratorConfiguration eventConfiguration;
- (id)_stats_key;
- (id)_categoryForType:;
- (id)_eventConfiguration;
- (void)notificationOccurred:;
- (double)_preparationTimeoutForStyle:;
- (void)_stopEventType:;
- (void)_privateNotificationOccurred:;
- (void)_playEventType:;
- (void)_privateNotificationInterrupted:;
+ (Class)_configurationClass;
@end
