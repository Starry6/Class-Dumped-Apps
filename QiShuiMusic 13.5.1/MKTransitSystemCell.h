@interface MKTransitSystemCell : MKCustomSeparatorCell
@property (nonatomic) NSString systemName;
@property (nonatomic) UIImage systemArtwork;
@property (nonatomic) BOOL showDisclosureButton;
@property (nonatomic) BOOL expanded;
- (id)initWithReuseIdentifier:;
- (BOOL)isExpanded;
- (void)_contentSizeCategoryDidChange;
- (void)setExpanded:;
- (void)prepareForReuse;
- (id)systemName;
- (void).cxx_destruct;
- (id)_disclosureButton;
- (void)infoCardThemeChanged;
- (void)_updateConstraintValues;
- (id)systemArtwork;
- (void)setSystemArtwork:;
- (void)setSystemName:;
- (void)setShowDisclosureButton:;
- (void)setExpanded:insideAnimation:;
- (id)_transformForExpandedState:animating:;
- (BOOL)showDisclosureButton;
@end
