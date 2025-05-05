@interface IESLiveMultiLinkerInteractScoreButton : UIView
@property (nonatomic) UIButton interactScoreButton;
@property (nonatomic) <IESLiveMultiLinkerProvider> provider;
@property (nonatomic) NSString userId;
- (id)initWithDIContext:userId:;
- (id)interactScoreButton;
- (id)interactScoreFont;
- (double)interactScoreHeight;
- (double)interactScoreWidth;
- (void)onInteractScoreButtonClicked;
- (void)setInteractScoreButton:;
- (void)setTitleLabelFont;
- (void)trackInteractScoreClicked;
- (void)updateInteractScoreButtonStyle;
- (void)setProvider:;
- (void)setTitleLabel:;
- (id)userId;
- (id)provider;
- (void).cxx_destruct;
- (void)setUserId:;
- (id)currentTitle;
@end
