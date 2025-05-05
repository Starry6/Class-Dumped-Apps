@interface SFFeatureManager : WBUFeatureManager
@property (nonatomic) BOOL canUseLoweredCapsule;
@property (nonatomic) q preferredCapsuleLayoutStyle;
@property (nonatomic) BOOL showRectangularTabsInSeparateBar;
@property (nonatomic) BOOL usesFormatMenuInUnifiedTabBar;
@property (nonatomic) BOOL verticalTabsEnabled;
@property (nonatomic) BOOL siriLinkEnabled;
@property (nonatomic) BOOL tabDocumentCanHideToolbar;
- (void)setTabDocumentCanHideToolbar:;
- (id)init;
- (long long)preferredCapsuleLayoutStyle;
- (BOOL)isSiriLinkEnabled;
- (BOOL)showRectangularTabsInSeparateBar;
- (BOOL)isVerticalTabsEnabled;
- (BOOL)usesFormatMenuInUnifiedTabBar;
- (BOOL)canUseLoweredCapsule;
- (BOOL)tabDocumentCanHideToolbar;
+ (BOOL)supportsWebpageStatusBar;
+ (id)sharedFeatureManager;
@end
