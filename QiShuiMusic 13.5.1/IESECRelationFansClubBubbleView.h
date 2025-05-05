@interface IESECRelationFansClubBubbleView : UIView
@property (nonatomic) UIImageView fansClubBubbleArrowImageView;
@property (nonatomic) UIView fansClubBubbleBackgroundView;
@property (nonatomic) UILabel fansClubPromptLabel;
@property (nonatomic) UILabel fansClubJumpLabel;
@property (nonatomic) UIView fansClubSeperator;
@property (nonatomic) UIImageView fansClubArrowImageView;
@property (nonatomic) <IESECRelationFansClubBubbleViewDelegate> delegate;
- (id)fansClubArrowImageView;
- (id)fansClubBubbleArrowImageView;
- (id)fansClubBubbleBackgroundView;
- (id)fansClubJumpLabel;
- (id)fansClubPromptLabel;
- (id)fansClubSeperator;
- (void)setFansClubArrowImageView:;
- (void)setFansClubBubbleArrowImageView:;
- (void)setFansClubBubbleBackgroundView:;
- (void)setFansClubJumpLabel:;
- (void)setFansClubPromptLabel:;
- (void)setFansClubSeperator:;
- (void)updateBubbleWithConfig:;
- (id)init;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setupViews;
- (void)tapAction;
@end
