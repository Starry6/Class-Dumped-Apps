@interface MFComposeWebContentVariationView : MFMailComposeHeaderView
@property (nonatomic) UIButton webContentVariableButton;
@property (nonatomic) UIView background;
@property (nonatomic) NSString selectedContentVariation;
- (id)background;
- (void)setBackground:;
- (void)layoutSubviews;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)refreshPreferredContentSize;
- (void)setupMenuItemTitles:currentSelection:handler:;
- (id)_generateActionsForTitles:currentSelection:handler:;
- (void)setSelectedContentVariationLabel:;
- (void)_flashBackground;
- (id)selectedContentVariation;
- (id)webContentVariableButton;
- (void)setWebContentVariableButton:;
@end
