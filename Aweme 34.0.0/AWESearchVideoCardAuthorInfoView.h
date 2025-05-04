@interface AWESearchVideoCardAuthorInfoView : UIView
@property (nonatomic) UIView<AWEAvatarImageViewProtocol> authorImageView;
@property (nonatomic) UILabel authorNameView;
@property (nonatomic) UILabel publishTimeView;
- (id)authorImageView;
- (void)setAuthorImageView:;
- (id)publishTimeWithModel:;
- (id)authorNameView;
- (id)publishTimeView;
- (void)setAuthorNameView:;
- (void)setPublishTimeView:;
- (void)updateWithModel:width:;
- (id)init;
- (void).cxx_destruct;
- (void)setupUI;
+ (id)AuthorInfoSizeWithModel:width:;
@end
