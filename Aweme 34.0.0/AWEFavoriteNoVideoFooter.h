@interface AWEFavoriteNoVideoFooter : UICollectionReusableView
@property (nonatomic) UIImageView noVideoImageView;
@property (nonatomic) UILabel noVideoLabel;
@property (nonatomic) UILabel fileToastLabel;
- (id)noVideoLabel;
- (void)setNoVideoLabel:;
- (id)noVideoImageView;
- (id)fileToastLabel;
- (void)setNoVideoImageView:;
- (void)setFileToastLabel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupViews;
@end
