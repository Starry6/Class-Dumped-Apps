@interface AWERegisterPageAgeAndGenderSelectCollectionViewCell : UICollectionViewCell
@property (nonatomic) UILabel contenTextLabel;
@property (nonatomic) UIImageView iconView;
@property (nonatomic) UILabel selectBirthdayTipsLabel;
@property (nonatomic) q type;
- (void)configWithContentType:;
- (void)removeDarkBorder;
- (void)addDarkBorder;
- (id)contenTextLabel;
- (id)selectBirthdayTipsLabel;
- (void)setBirthdayWith:;
- (void)setContenTextLabel:;
- (void)setSelectBirthdayTipsLabel:;
- (id)initWithFrame:;
- (id)iconView;
- (long long)type;
- (void)setIconView:;
- (void)setType:;
- (void).cxx_destruct;
- (void)setupUI;
+ (id)identifier;
@end
