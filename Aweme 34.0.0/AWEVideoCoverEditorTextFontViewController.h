@interface AWEVideoCoverEditorTextFontViewController : ACCTextStyleViewController
@property (nonatomic) AWEVideoCoverEditorTextFontChooseView fontChooseView;
@property (nonatomic) AWEVideoCoverFontDataLoader fontDataLoader;
@property (nonatomic) NSString observerIdentifier;
@property (nonatomic) BOOL isInputEditMode;
- (void)configUI;
- (id)fontChooseView;
- (void)setDidSelectedFontBlock:;
- (void)resetViewWithHeight:;
- (void)clearSelectFont;
- (void)selectWithFontId:;
- (void)resetContentInsets:;
- (void)setFontChooseView:;
- (void)setFontDataLoader:;
- (id)fontDataLoader;
- (void)disableFontView;
- (void)resetFontView;
- (id)observerIdentifier;
- (void)setObserverIdentifier:;
- (void)setIsInputEditMode:;
- (void)constructFontData;
- (BOOL)isInputEditMode;
- (id)initWithMode:;
- (void).cxx_destruct;
- (void)setupUI;
@end
