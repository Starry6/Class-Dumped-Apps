@interface AWEShareTokenFeedShareCardView : AWEShareTokenNoteBaseCardView
@property (nonatomic) AWEShareTokenHandlerResponseModel model;
@property (nonatomic) UIImageView avatarView;
@property (nonatomic) UILabel authorLabel;
@property (nonatomic) UILabel descriptionLabel;
- (id)initWithModel:context:;
- (void)setAuthorLabel:;
- (id)authorLabel;
- (void)__createComponents;
- (void)__layoutComponents;
- (void)__joinFeedShare:;
- (void)setModel:;
- (void)setDescriptionLabel:;
- (void)setAvatarView:;
- (id)avatarView;
- (id)model;
- (void).cxx_destruct;
- (id)descriptionLabel;
@end
