@interface IESLiveMultiLinkerLargeSmallView : UIView
@property (nonatomic) IESLiveMultiLinkerLastResultView lastResultView;
@property (nonatomic) UIView ownerInfoBackgroundView;
@property (nonatomic) IESLiveMultiLinkerInteractScoreButton interactScoreButtonView;
@property (nonatomic) IESLiveMultilinkerLargeOwnerProfileView ownerProfileView;
@property (nonatomic) <IESLiveInteractUserModel> user;
- (void)calNickNameLabelWidth;
- (id)initWithDIContext:user:;
- (id)interactScoreButtonView;
- (id)lastResultView;
- (id)ownerInfoBackgroundView;
- (id)ownerProfileView;
- (void)setInteractScoreButtonHidden:;
- (void)setInteractScoreButtonTitleLabelText:;
- (void)setInteractScoreButtonView:;
- (void)setLastResultView:;
- (void)setLastResultViewHidden:;
- (void)setOwnerInfoBackgroundView:;
- (void)setOwnerProfileView:;
- (void)updateInteractScoreButtonStyle;
- (void)updateLastResultViewStyle:;
- (void)setUser:;
- (id)user;
- (void).cxx_destruct;
- (void)updateUserInfo:;
- (void)layoutUI;
@end
