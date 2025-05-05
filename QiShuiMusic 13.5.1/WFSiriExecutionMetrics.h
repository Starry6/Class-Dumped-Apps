@interface WFSiriExecutionMetrics : NSObject
@property (nonatomic) Q shortcutActionCount;
@property (nonatomic) Q currentShortcutStep;
@property (nonatomic) Q siriInteractionCount;
- (id)init;
- (unsigned long long)shortcutActionCount;
- (void)setShortcutActionCount:;
- (unsigned long long)currentShortcutStep;
- (void)setCurrentShortcutStep:;
- (unsigned long long)siriInteractionCount;
- (void)setSiriInteractionCount:;
@end
