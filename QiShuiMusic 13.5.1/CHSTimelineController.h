@interface CHSTimelineController : NSObject
@property (nonatomic) NSString avocadoIdentifier;
@property (nonatomic) NSString extensionBundleIdentifier;
@property (nonatomic) NSString kind;
- (id)extensionBundleIdentifier;
- (id)reloadTimeline;
- (id)kind;
- (id)initForAvocadoIdentifier:inBundleIdentifier:;
- (id)avocadoIdentifier;
- (id)reloadTimelineBudgetedWithReason:;
- (void).cxx_destruct;
- (id)reloadTimelineWithReason:;
- (id)initWithExtensionBundleIdentifier:kind:;
- (id)reloadTimelineBudgeted;
@end
