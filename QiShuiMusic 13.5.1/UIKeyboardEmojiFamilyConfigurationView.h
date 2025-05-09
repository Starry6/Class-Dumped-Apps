@interface UIKeyboardEmojiFamilyConfigurationView : UIView
@property (nonatomic) BOOL usesDarkStyle;
@property (nonatomic) NSMutableArray familyMemberStackViews;
@property (nonatomic) UIView separatorView;
@property (nonatomic) UIStackView previewWellStackView;
@property (nonatomic) UIKeyboardEmojiWellView neutralWellView;
@property (nonatomic) UIKeyboardEmojiWellView configuredWellView;
@property (nonatomic) NSIndexPath lastSelectedIndexPath;
@property (nonatomic) NSString baseEmojiString;
@property (nonatomic) NSMutableArray selectedVariantIndices;
@property (nonatomic) NSArray skinToneVariantRows;
@property (nonatomic) NSArray variantDisplayRows;
@property (nonatomic) UIKBTree representedKey;
@property (nonatomic) BOOL hasSplitFontSupport;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)retestSelectedVariantIndexForKey:atPoint:;
- (void)layoutSubviews;
- (id)separatorView;
- (void)retestForTouchUpSelectedVariantIndexForKey:atPoint:;
- (id)initWithFrame:;
- (id)selectedVariantIndices;
- (void).cxx_destruct;
- (id)lastSelectedIndexPath;
- (void)setSelectedVariantIndices:;
- (void)setSeparatorView:;
- (void)updateForKeyplane:key:;
- (void)updateRenderConfig:;
- (void)_colorConfigurationDidChange;
- (void)_configureSkinToneVariantSpecifiersForBaseString:;
- (void)_configureFamilyMemberWellStackViews;
- (id)_wellViewForSection:item:;
- (unsigned long long)_silhouetteFromCurrentSelections;
- (id)_currentlySelectedSkinToneConfiguration;
- (void)_setCurrentlySelectedSkinToneConfiguration:;
- (void)_updateBottomRowForSelections:;
- (void)_updatePreviewWellForCurrentSelection;
- (BOOL)_hasCompletelyConfiguredSkinToneConfiguration;
- (void)_updateReferencedKeySelectedVariantIndexBasedOnCurrentConfiguration;
- (void)_beginFamilyMetachronalRhythmAnimation;
- (BOOL)usesDarkStyle;
- (void)setUsesDarkStyle:;
- (id)familyMemberStackViews;
- (void)setFamilyMemberStackViews:;
- (id)previewWellStackView;
- (void)setPreviewWellStackView:;
- (id)neutralWellView;
- (void)setNeutralWellView:;
- (id)configuredWellView;
- (void)setConfiguredWellView:;
- (void)setLastSelectedIndexPath:;
- (id)baseEmojiString;
- (void)setBaseEmojiString:;
- (id)skinToneVariantRows;
- (void)setSkinToneVariantRows:;
- (id)variantDisplayRows;
- (void)setVariantDisplayRows:;
- (id)representedKey;
- (void)setRepresentedKey:;
- (BOOL)hasSplitFontSupport;
- (void)setHasSplitFontSupport:;
+ (id)_selectionAndSeparatorColorForDarkMode:;
+ (id)preferredContentViewSizeForKey:withTraits:;
@end
