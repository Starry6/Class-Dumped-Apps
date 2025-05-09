@interface MKPlaceCardActionSectionView : MKPlaceSectionRowView
@property (nonatomic) MKPlaceCardActionItem leftItem;
@property (nonatomic) MKPlaceCardActionItem rightItem;
@property (nonatomic) BOOL singleItemIsFullWidth;
@property (nonatomic) UIButton leftButton;
@property (nonatomic) UIButton rightButton;
@property (nonatomic) UIView accessoryView;
@property (nonatomic) <MKPlaceCardActionSectionViewDelegate> delegate;
- (void)dealloc;
- (void)setAccessoryView:;
- (void)setDelegate:;
- (id)leftButton;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (id)rightButton;
- (id)accessoryView;
- (void)setLeftButton:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setRightButton:;
- (void)_contentSizeDidChange;
- (void)infoCardThemeChanged;
- (void)setTopHairlineHidden:;
- (void)_leftButtonIsPressed:;
- (void)_rightButtonIsPressed:;
- (id)initWithLeftActionItem:rightActionItem:useSmallFonts:singleItemIsFullWidth:;
- (id)initWithLeftActionItem:rightActionItem:useSmallFonts:singleItemIsFullWidth:useMarginLayout:;
- (id)currentLeftItem;
- (void)_setUpViewWithButtons;
- (id)glyphFont;
- (id)_makePlaceActionButtonWithActionItem:isLeftItem:useSmallFonts:;
- (id)leftItem;
- (void)setLeftItem:;
- (id)rightItem;
- (void)setRightItem:;
- (BOOL)singleItemIsFullWidth;
- (void)setSingleItemIsFullWidth:;
+ (id)_font:;
+ (void)_setButtonString:forActionItem:isLeftItem:;
@end
