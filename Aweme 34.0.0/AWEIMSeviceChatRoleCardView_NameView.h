@interface AWEIMSeviceChatRoleCardView_NameView : UIView
@property (nonatomic) UIStackView stackView;
@property (nonatomic) UILabel label;
@property (nonatomic) UIImageView imageView;
@property (nonatomic) @? tapIdentityIconActionBlock;
- (void)setTapIdentityIconActionBlock:;
- (id)tapIdentityIconActionBlock;
- (void)tapRoleIcon;
- (void)setUserModel:context:;
- (double)spacing;
- (void)setLabel:;
- (id)init;
- (id)stackView;
- (void)setStackView:;
- (id)label;
- (void).cxx_destruct;
- (void)setImageView:;
- (id)imageView;
@end
