@interface AWESearchFilmTVLeadingCreatorCell : UICollectionViewCell
@property (nonatomic) AWEGeneralFilmTVLeadingCreatorInfoModel model;
@property (nonatomic) UIImageView avatarImgView;
@property (nonatomic) UIImageView topicImgView;
@property (nonatomic) UILabel topicLabel;
@property (nonatomic) UIImageView checkImgView;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) UILabel roleLabel;
- (id)avatarImgView;
- (void)setAvatarImgView:;
- (id)topicLabel;
- (void)setTopicLabel:;
- (id)roleLabel;
- (void)setRoleLabel:;
- (id)topicImgView;
- (id)checkImgView;
- (void)updateCheckImgViewUI;
- (void)updateTopicImgViewUI;
- (void)setTopicImgView:;
- (void)setCheckImgView:;
- (void)setModel:;
- (id)initWithFrame:;
- (id)model;
- (id)nameLabel;
- (void).cxx_destruct;
- (void)setNameLabel:;
- (void)updateModel:;
@end
