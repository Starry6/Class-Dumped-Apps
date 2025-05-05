@interface IESLiveVSTempleteCell : UICollectionViewCell
@property (nonatomic) UIImageView templateImageView;
@property (nonatomic) UIView containerView;
@property (nonatomic) Q status;
@property (nonatomic) @? didSelectedBlock;
@property (nonatomic) NSIndexPath index;
- (void)changeToStatus:;
- (id)didSelectedBlock;
- (id)imageOfCell;
- (void)setDidSelectedBlock:;
- (void)setScrollSelected:;
- (void)setTemplateImageView:;
- (id)templateImageView;
- (void)setStatus:;
- (void)layoutSubviews;
- (id)containerView;
- (void)setContainerView:;
- (void)prepareForReuse;
- (id)index;
- (id)initWithFrame:;
- (void)setIndex:;
- (void).cxx_destruct;
- (unsigned long long)status;
- (void)setupSubviews;
- (void)updateWithImage:;
+ (id)identifier;
@end
