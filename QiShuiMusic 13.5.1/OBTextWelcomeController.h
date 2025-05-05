@interface OBTextWelcomeController : OBWelcomeController
@property (nonatomic) UIStackView stackView;
@property (nonatomic) OBTextBulletedList currentBulletedList;
- (void)setStackView:;
- (id)initWithTitle:;
- (id)stackView;
- (void).cxx_destruct;
- (void)loadView;
- (id)initWithTitle:detailText:symbolName:contentLayout:;
- (BOOL)shouldInlineButtonTray;
- (id)initWithTitle:detailText:contentLayout:;
- (void)addSectionWithHeader:content:;
- (void)addSectionWithHeader:content:accessoryButton:;
- (void)addBulletedListItemWithTitle:description:;
- (void)addBulletedListItemWithTitle:description:accessoryButton:;
- (id)currentBulletedList;
- (void)setCurrentBulletedList:;
@end
