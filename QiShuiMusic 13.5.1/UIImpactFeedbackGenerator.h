@interface UIImpactFeedbackGenerator : UIFeedbackGenerator
@property (nonatomic) _UIImpactFeedbackGeneratorConfiguration impactConfiguration;
- (id)_stats_key;
- (id)_ui_descriptionBuilder;
- (void)_impactOccurredWithIntensity:;
- (void)impactOccurred;
- (id)_impactConfiguration;
- (id)_styleString;
- (id)initWithStyle:coordinateSpace:;
- (void)impactOccurredWithIntensity:;
- (id)initWithStyle:;
+ (Class)_configurationClass;
@end
