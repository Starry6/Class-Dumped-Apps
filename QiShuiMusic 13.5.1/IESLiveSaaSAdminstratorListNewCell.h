@interface IESLiveSaaSAdminstratorListNewCell : IESLiveSaaSAdminNewCell
@property (nonatomic) UIImageView fansImage;
@property (nonatomic) UILabel statusLable;
@property (nonatomic) UILabel subTitleLable;
@property (nonatomic) GetAdminListResponse_AdminUser adminUserModel;
- (void)setStatusLable:;
- (id)adminUserModel;
- (void)configWithManager:;
- (id)fansImage;
- (void)refreshStatusLabelConfig;
- (void)setAdminUserModel:;
- (void)setFansImage:;
- (void)setSubTitleLable:;
- (id)statusLable;
- (id)subTitleLable;
- (id)initWithStyle:reuseIdentifier:;
- (void)layoutSubviews;
- (void).cxx_destruct;
@end
