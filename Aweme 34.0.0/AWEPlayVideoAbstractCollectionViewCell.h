@interface AWEPlayVideoAbstractCollectionViewCell : UICollectionViewCell
@property (nonatomic) UILabel titleLable;
@property (nonatomic) UILabel contentLabel;
@property (nonatomic) AWEPlayVideoAbstractTimeComponent timeBackView;
- (id)titleLable;
- (void)setTitleLable:;
- (void)configUI;
- (id)timeBackView;
- (void)updateWithContent:jumpTime:title:;
- (void)setTimeBackView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setSelected:;
- (id)contentLabel;
- (void)setContentLabel:;
+ (id)identifier;
@end
