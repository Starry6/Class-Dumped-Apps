@interface IESLiveJoinFansClubView : UIView
@property (nonatomic) HTSLiveAvatarImageView avatarImageView;
@property (nonatomic) UILabel joinLabel;
@property (nonatomic) UIButton joinButton;
@property (nonatomic) <IESLiveCollectionViewItemProtocol> item;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <IESLiveRefactGiftPanelSectionVMProtocol> sectionVM;
- (void)joinButtonClick;
- (id)joinLabel;
- (id)sectionVM;
- (void)setJoinLabel:;
- (void)setSectionVM:;
- (id)item;
- (id)initWithFrame:;
- (void)setItem:;
- (void).cxx_destruct;
- (void)setupUI;
- (id)avatarImageView;
- (void)setAvatarImageView:;
- (id)joinButton;
- (void)setJoinButton:;
@end
