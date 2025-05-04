@interface AWECommentVideoAbstractSectionCell : UICollectionViewCell
@property (nonatomic) LOTAnimationView lottieView;
@property (nonatomic) UIImageView iconImgView;
@property (nonatomic) UILabel contentLabel;
@property (nonatomic) UILabel timeLable;
@property (nonatomic) double timeLabelWidth;
- (id)lottieView;
- (void)setLottieView:;
- (void)configUI;
- (id)iconImgView;
- (void)setIconImgView:;
- (id)timeLable;
- (void)setTimeLable:;
- (double)timeLabelWidth;
- (id)contentFloatingRedTextIfNeed:textExtra:extraLength:attributes:;
- (void)setTimeLabelWidth:;
- (void)updateWithContent:jumpTime:sectionModel:timeLabelWidth:path:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setSelected:;
- (id)contentLabel;
- (void)setContentLabel:;
+ (id)identifier;
@end
