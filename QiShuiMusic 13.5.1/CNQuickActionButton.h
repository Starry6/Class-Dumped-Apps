@interface CNQuickActionButton : UIView
@property (nonatomic) UIButton button;
@property (nonatomic) UILabel label;
@property (nonatomic) NSArray activatedConstraints;
@property (nonatomic) CNQuickAction action;
@property (nonatomic) BOOL showTitle;
@property (nonatomic) BOOL showBackgroundPlatter;
@property (nonatomic) <CNQuickActionButtonDelegate> delegate;
- (void)setDelegate:;
- (id)action;
- (void)performAction;
- (void)setLabel:;
- (id)label;
- (void)setAction:;
- (BOOL)showTitle;
- (void)setShowTitle:;
- (id)initWithFrame:;
- (id)button;
- (id)delegate;
- (void).cxx_destruct;
- (void)setButton:;
- (void)updateConstraints;
- (id)activatedConstraints;
- (void)setActivatedConstraints:;
- (BOOL)showBackgroundPlatter;
- (void)setShowBackgroundPlatter:;
- (void)onLongPress:;
@end
