@interface AWEProfileHeaderHomeShortcutSectionViewModel : AWEBaseListSectionViewModel
@property (nonatomic) AWEProfileHeaderContext context;
@property (nonatomic) double topPadding;
@property (nonatomic) BOOL showProfileInfoComplete;
@property (nonatomic) double profileInfoCompletePercent;
@property (nonatomic) BOOL hidePercentWhenCompleted;
@property (nonatomic) BOOL languageDidChange;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configWithContext:;
- (void)updateProfileCompletion:hidePercentWhenCompleted:;
- (void)showProfileInfoCompletionAnimation;
- (id)padService;
- (double)topPaddingWithUpperSection:;
- (BOOL)hidePercentWhenCompleted;
- (void)p_languageDidChange;
- (void)setLanguageDidChange:;
- (void)setShowProfileInfoComplete:;
- (void)setHidePercentWhenCompleted:;
- (void)setProfileInfoCompletePercent:;
- (BOOL)showProfileInfoComplete;
- (double)profileInfoCompletePercent;
- (id)init;
- (double)topPadding;
- (void)dealloc;
- (long long)sectionType;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (void)setTopPadding:;
- (id)sectionSize;
- (BOOL)languageDidChange;
@end
