@interface AWEIMSecondaryCommentCell : UITableViewCell
@property (nonatomic) <AWEIMSecondaryCommentCellDelegate> delegate;
@property (nonatomic) UIImageView avatarView;
@property (nonatomic) UIImageView coverImageView;
@property (nonatomic) YYLabel contentLabel;
@property (nonatomic) YYLabel deleteTipLabel;
@property (nonatomic) AWECommentModel commentModel;
@property (nonatomic) AWEUserNameLabel nameLabel;
@property (nonatomic) UILabel relationTagLabel;
- (id)commentModel;
- (void)setCommentModel:;
- (id)coverImageView;
- (void)setCoverImageView:;
- (void)configWithModel:;
- (id)relationTagLabel;
- (void)setRelationTagLabel:;
- (void)p_showPictureDetail;
- (void)p_showStickerDetail;
- (void)nameLabelTapped:;
- (id)deleteTipLabel;
- (void)configCoverImageWithAwemeCommentModel;
- (void)p_showReplyUser;
- (void)p_showDefaultCommentContent;
- (void)contentLabelHighlightTapped:;
- (void)coverViewTapped:;
- (void)setDeleteTipLabel:;
- (id)accessibilityLabel;
- (id)delegate;
- (void)setAvatarView:;
- (id)avatarView;
- (id)initWithStyle:reuseIdentifier:;
- (id)nameLabel;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)layoutSubviews;
- (BOOL)accessibilityPerformMagicTap;
- (void)setNameLabel:;
- (void)setupUI;
- (id)contentLabel;
- (void)setContentLabel:;
- (void)avatarViewTapped:;
+ (id)defaultCoverImage;
+ (id)gifTagLabelView;
+ (double)heightForModel:;
+ (id)computeSizeForContent:withWidth:;
+ (id)contentLabelAttributedStringWithModel:;
+ (id)truncationAttributedStringWithModel:;
+ (id)deleteTipAttributedStringWithStr:;
+ (id)commentTimeAttributedStringWithModel:;
+ (id)commentContentAttributedStringWithModel:;
+ (id)commentStickerAttributedStringWithModel:;
+ (id)identifier;
+ (id)_defaultImage;
@end
