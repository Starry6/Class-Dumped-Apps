@interface UIContentSizeCategoryPreference : NSObject
@property (nonatomic) NSString preferredContentSizeCategory;
@property (nonatomic) NSString preferredContentSizeCategoryCarPlay;
- (id)init;
- (id)preferredContentSizeCategory;
- (unsigned long long)hash;
- (id)initWithContentSizeCategory:;
- (id)initWithRawUserDefaults;
- (void)setPreferredContentSizeCategory:;
- (void)setPreferredContentSizeCategoryCarPlay:;
- (id)preferredContentSizeCategoryCarPlay;
- (void).cxx_destruct;
- (void)checkForChanges;
- (id)description;
- (id)initWithContentSizeCategory:carPlay:;
- (BOOL)isEqual:;
+ (void)_resetSystemPreferenceOverride;
+ (void)asyncResetSystemPreferenceOverride;
+ (void)overrideSystemWithPreference:;
+ (void)_overrideSystemPreferenceToContentSizeCategory:forBlock:;
+ (void)_populateUserDefaultsContentSizeCategory:carPlay:;
+ (id)system;
+ (void)asyncOverrideSystemWithPreference:;
+ (void)resetSystemPreferenceOverride;
+ (void)_overrideSystemPreferenceToContentSizeCategory:;
+ (void)overrideSystemWithPreference:forBlock:;
@end
