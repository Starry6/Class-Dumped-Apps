@interface AWETeenSearchGuessCell : UICollectionViewCell
@property (nonatomic) UILabel contentLabel;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) AWETeenIndividualWordModel data;
- (id)initWithFrame:;
- (id)iconImageView;
- (void)setData:;
- (void).cxx_destruct;
- (id)data;
- (void)setIconImageView:;
- (void)setupUI;
- (id)contentLabel;
- (void)setContentLabel:;
+ (id)cellIdentifier;
+ (double)cellHeight;
@end
