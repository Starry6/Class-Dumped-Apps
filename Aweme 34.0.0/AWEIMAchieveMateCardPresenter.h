@interface AWEIMAchieveMateCardPresenter : AWEIMUIViewPresenter
@property (nonatomic) AWEIMUIViewPresenter avatarBox;
@property (nonatomic) AWEIMTwoAvatarClashViewPresenter clashPresenter;
@property (nonatomic) AWEIMUIImageViewPresenter leftAvatar;
@property (nonatomic) AWEIMMaskUIViewPresenter rightAvatarBGView;
@property (nonatomic) AWEIMUIImageViewPresenter rightAvatar;
@property (nonatomic) AWEIMYYLabelPresenter nameLabel;
@property (nonatomic) AWEIMUIViewPresenter nameBox;
@property (nonatomic) AWEIMYYLabelPresenter introLabel;
@property (nonatomic) AWEIMUIViewPresenter introBox;
@property (nonatomic) AWEIMUIViewPresenter separatorLineView;
@property (nonatomic) AWEIMYYLabelPresenter stickerTitle;
@property (nonatomic) AWEIMAchieveMateStickerViewPresenter stickerView;
- (BOOL)useNewStyle;
- (void)updateView:withContext:;
- (void)didReceiveProps:;
- (id)stickerTitle;
- (void)setStickerTitle:;
- (void)trackFriendIMNotiecActionType:;
- (void)showAvatarWithoutAnimation;
- (void)playClashAnimation;
- (id)clashPresenter;
- (id)nameBox;
- (id)introBox;
- (void)configSubPresentersWithContext:;
- (id)avatarBox;
- (id)rightAvatarBGView;
- (id)leftAvatar;
- (id)rightAvatar;
- (void)updateSubpresenterProps;
- (void)updatePeerUserAvatarWithContext:;
- (void)updateCurrentUserAvatar;
- (void)updateAvatarProps:avatarURLArr:;
- (id)getAttrTitleStr;
- (id)getAttrsubtitleStr;
- (id)getStickerTitleStr;
- (id)getRightAvatarShapePath;
- (void)setAvatarBox:;
- (void)setClashPresenter:;
- (void)setLeftAvatar:;
- (void)setRightAvatarBGView:;
- (void)setRightAvatar:;
- (void)setNameBox:;
- (void)setIntroBox:;
- (id)initWithContext:;
- (id)nameLabel;
- (void).cxx_destruct;
- (void)setNameLabel:;
- (void)setStickerView:;
- (BOOL)hasStickers;
- (id)stickerView;
- (id)introLabel;
- (void)setIntroLabel:;
- (id)separatorLineView;
- (void)setSeparatorLineView:;
@end
