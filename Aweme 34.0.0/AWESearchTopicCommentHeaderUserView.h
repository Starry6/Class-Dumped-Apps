@interface AWESearchTopicCommentHeaderUserView : UIView
@property (nonatomic) CAShapeLayer maskLayer;
@property (nonatomic) UIImageView userImageView;
@property (nonatomic) UILabel authorNameLabel;
@property (nonatomic) UILabel isMeLabelIcon;
@property (nonatomic) UIImageView avatarTagView;
@property (nonatomic) @? authorNameTappedBlock;
@property (nonatomic) @? relationTagTappedBlock;
- (id)userImageView;
- (void)setUserImageView:;
- (void)setAuthorNameLabel:;
- (id)authorNameLabel;
- (id)avatarTagView;
- (id)authorNameTappedBlock;
- (void)setAvatarTagView:;
- (void)setAuthorNameTappedBlock:;
- (id)relationTagTappedBlock;
- (void)setRelationTagTappedBlock:;
- (void)configWithUser:commentTime:commentIpString:;
- (void)updateLayoutWithUser:containerWidth:containerHeight:;
- (id)isMeLabelIcon;
- (void)setIsMeLabelIcon:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)maskLayer;
- (void)setMaskLayer:;
@end
