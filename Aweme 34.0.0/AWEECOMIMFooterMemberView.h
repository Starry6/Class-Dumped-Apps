@interface AWEECOMIMFooterMemberView : UIView
@property (nonatomic) UIStackView contentView;
@property (nonatomic) UIImageView iconView;
@property (nonatomic) UILabel textLabel;
@property (nonatomic) NSString logoUrl;
@property (nonatomic) NSString logoDesc;
- (id)logoDesc;
- (void)setLogoDesc:;
- (id)textLabel;
- (id)initWithFrame:;
- (id)contentView;
- (id)iconView;
- (void)setIconView:;
- (void).cxx_destruct;
- (void)setContentView:;
- (void)setTextLabel:;
- (id)logoUrl;
- (void)setLogoUrl:;
@end
