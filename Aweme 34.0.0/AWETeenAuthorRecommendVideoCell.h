@interface AWETeenAuthorRecommendVideoCell : UICollectionViewCell
@property (nonatomic) AWETeenRecAuthorVideo model;
@property (nonatomic) UIImageView coverView;
@property (nonatomic) UIImageView imageIconView;
@property (nonatomic) UIImageView diggIconView;
@property (nonatomic) UILabel diggCountLabel;
- (void)p_setupUI;
- (id)diggCountLabel;
- (void)setDiggCountLabel:;
- (id)diggIconView;
- (void)setDiggIconView:;
- (void)configWithModel:awemeModel:;
- (void)p_onAwemeDiggNotification:;
- (id)imageIconView;
- (void)setImageIconView:;
- (void)setModel:;
- (void)dealloc;
- (id)initWithFrame:;
- (id)model;
- (void).cxx_destruct;
- (id)coverView;
- (void)setCoverView:;
+ (id)identifier;
@end
