@interface UIStatusBarCarPlayDockItemView : UIStatusBarItemView
@property (nonatomic) UILabel inCallDurationLabel;
@property (nonatomic) UIStatusBarCarPlayDockAppItemButton itemOneButton;
@property (nonatomic) UIStatusBarCarPlayDockAppItemButton itemTwoButton;
@property (nonatomic) UIStatusBarCarPlayDockAppItemButton itemThreeButton;
@property (nonatomic) NSLayoutConstraint inCallLabelSpacingConstraint;
@property (nonatomic) NSLayoutConstraint itemOneTopConstraint;
@property (nonatomic) NSArray currentBundleIdentifiers;
@property (nonatomic) NSString currentActiveBundleIdentifier;
@property (nonatomic) UIView preferredItemViewToFocus;
@property (nonatomic) BOOL showingCallTimer;
- (void)layoutSubviews;
- (id)hitTest:withEvent:;
- (id)preferredFocusEnvironments;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (BOOL)allowsUserInteraction;
- (BOOL)updateForNewData:actions:;
- (double)neededSizeForImageSet:;
- (double)extraRightPadding;
- (BOOL)animatesDataChange;
- (double)extraLeftPadding;
- (double)_neededSizeWithCallTimer;
- (double)_neededSizeWithoutCallTimer;
- (void)updateForNewStyle:;
- (id)_toItemViewForBundleIdentifier:;
- (void)_updateInCallDurationIfNecessary:;
- (unsigned long long)_numberOfEnabledItems;
- (id)inCallDurationLabel;
- (void)setInCallDurationLabel:;
- (id)itemOneButton;
- (void)setItemOneButton:;
- (id)itemTwoButton;
- (void)setItemTwoButton:;
- (id)itemThreeButton;
- (void)setItemThreeButton:;
- (id)inCallLabelSpacingConstraint;
- (void)setInCallLabelSpacingConstraint:;
- (id)itemOneTopConstraint;
- (void)setItemOneTopConstraint:;
- (id)currentBundleIdentifiers;
- (void)setCurrentBundleIdentifiers:;
- (id)currentActiveBundleIdentifier;
- (void)setCurrentActiveBundleIdentifier:;
- (id)preferredItemViewToFocus;
- (void)setPreferredItemViewToFocus:;
- (BOOL)isShowingCallTimer;
- (void)setShowingCallTimer:;
@end
