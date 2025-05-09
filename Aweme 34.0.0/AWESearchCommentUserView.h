@interface AWESearchCommentUserView : UIView
@property (nonatomic) AWEAwemeModel aweme;
@property (nonatomic) CAShapeLayer maskLayer;
@property (nonatomic) UIImageView userImageView;
@property (nonatomic) UILabel authorNameLabel;
@property (nonatomic) UILabel insTimeLabel;
@property (nonatomic) UIImageView avatarTagView;
@property (nonatomic) @? authorNameTappedBlock;
@property (nonatomic) @? relationTagTappedBlock;
- (id)aweme;
- (void)setAweme:;
- (id)userImageView;
- (void)setUserImageView:;
- (void)setAuthorNameLabel:;
- (id)authorNameLabel;
- (id)avatarTagView;
- (id)authorNameTappedBlock;
- (void)setAvatarTagView:;
- (void)setAuthorNameTappedBlock:;
- (id)insTimeLabel;
- (void)setInsTimeLabel:;
- (id)relationTagTappedBlock;
- (void)setRelationTagTappedBlock:;
- (void)configWithUser:commentTime:;
- (void)updateLayoutWithUser:containerWidth:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)maskLayer;
- (void)setMaskLayer:;
@end
