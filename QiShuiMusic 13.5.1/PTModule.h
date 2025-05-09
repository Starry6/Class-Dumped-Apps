@interface PTModule : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <PTComponentObserver> componentObserver;
@property (nonatomic) PTSettings settings;
@property (nonatomic) NSPredicate appearancePredicate;
@property (nonatomic) NSString childSettingsKeyPath;
@property (nonatomic) NSArray allSections;
@property (nonatomic) NSArray enabledSections;
- (void)removeObserver:;
- (void)settings:changedValueForKeyPath:;
- (void)addObserver:;
- (void)dealloc;
- (id)settings;
- (void)setSettings:;
- (id)allSections;
- (void)setTitle:;
- (id)initWithCoder:;
- (id)sectionAtIndex:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)title;
- (id)initWithContents:;
- (void).cxx_destruct;
- (unsigned long long)numberOfSections;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)_remoteEditingWhitelistedComponent;
- (id)componentObserver;
- (void)setComponentObserver:;
- (id)appearancePredicate;
- (void)setAppearancePredicate:;
- (id)childSettingsKeyPath;
- (void)setChildSettingsKeyPath:;
- (id)enabledSections;
- (void)section:didInsertRows:deleteRows:;
- (void)sectionDidReload:;
- (void)enabledSectionsDidChange:;
- (id)rowAtIndexPath:;
- (id)indexPathForRow:;
- (void)_updateEnabledSections;
- (id)_computeEnabledSections;
- (void)_reportSectionInsertsAndDeletesRelativeTo:;
- (id)_settingsForComponent:;
- (id)_remoteEditingWhitelistedModule;
+ (BOOL)supportsSecureCoding;
+ (id)sectionWithRows:title:;
+ (id)moduleWithTitle:contents:;
+ (id)sectionWithRows:;
+ (id)submoduleWithModule:childSettingsKeyPath:;
+ (id)sectionWithRows:title:conditionFormat:;
+ (id)sectionWithRows:title:condition:;
+ (id)submoduleWithModule:childSettingsKeyPath:condition:;
+ (id)submoduleWithModule:;
+ (id)moduleWithSettings:;
@end
