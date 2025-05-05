@interface IESLiveSaaSManagedUserListNewCell : IESLiveSaaSAdminNewCell
@property (nonatomic) UIImageView fansImage;
@property (nonatomic) UILabel operatorLabel;
@property (nonatomic) UILabel operateTimeLabel;
@property (nonatomic) Q type;
- (void)_setupSubViews;
- (void)configWithManagerModel:;
- (id)fansImage;
- (id)operateTimeLabel;
- (id)operatorLabel;
- (void)setFansImage:;
- (void)setOperateTimeLabel:;
- (void)setOperatorLabel:;
- (void)setupType:;
- (id)initWithStyle:reuseIdentifier:;
- (void)layoutSubviews;
- (void)setType:;
- (unsigned long long)type;
- (void).cxx_destruct;
@end
