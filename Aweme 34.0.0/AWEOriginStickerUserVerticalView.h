@interface AWEOriginStickerUserVerticalView : UIView
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel createdByLabel;
@property (nonatomic) UILabel creatorNameLabel;
- (void)updateWithUserModel:;
- (id)createdByLabel;
- (id)creatorNameLabel;
- (void)layoutStickerUserView;
- (void)setCreatedByLabel:;
- (void)setCreatorNameLabel:;
- (id)initWithFrame:;
- (id)iconImageView;
- (void).cxx_destruct;
- (void)setIconImageView:;
- (void)setupUI;
@end
