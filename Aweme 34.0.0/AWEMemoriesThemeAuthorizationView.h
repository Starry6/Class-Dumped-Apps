@interface AWEMemoriesThemeAuthorizationView : UIView
@property (nonatomic) UIImageView backgroundImageView;
@property (nonatomic) UIImageView promptImageView;
@property (nonatomic) UILabel promptLabel;
@property (nonatomic) AWETextLinkView tipsLabel;
@property (nonatomic) UIButton enableAuthorizationButton;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)tipsLabel;
- (void)setTipsLabel:;
- (id)promptImageView;
- (id)enableAuthorizationButton;
- (void)enableAuthorizationClicked:;
- (void)setPromptImageView:;
- (void)setEnableAuthorizationButton:;
- (id)promptLabel;
- (void)setPromptLabel:;
- (BOOL)textView:shouldInteractWithURL:inRange:interaction:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)backgroundImageView;
- (void)setupUI;
- (void)setBackgroundImageView:;
@end
