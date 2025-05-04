@interface AWESearchVideoDeconstructGuessWordCell : UICollectionViewCell
@property (nonatomic) UIImageView cover;
@property (nonatomic) DUXBaseLabel mainTitle;
@property (nonatomic) DUXBaseLabel subTitle;
@property (nonatomic) BOOL withPicture;
@property (nonatomic) BOOL isSelected;
- (id)cover;
- (void)setCover:;
- (BOOL)withPicture;
- (void)updateWithMainText:subText:;
- (void)setWithPicture:;
- (void)setIsSelected:;
- (id)initWithFrame:;
- (void)setSubTitle:;
- (id)subTitle;
- (BOOL)isSelected;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupSubviews;
- (id)mainTitle;
- (void)setMainTitle:;
+ (id)reuseIdentifier;
@end
