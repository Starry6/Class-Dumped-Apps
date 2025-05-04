@interface AWEVideoDescriptionMaskSingleFeedCoverCell : UICollectionViewCell
@property (nonatomic) AWEFeedCollectionContainerContext containerContext;
@property (nonatomic) UIView containerView;
@property (nonatomic) UIImageView firstMaskCoverImageView;
- (double)bottomFrame;
- (void)updateCoverImageView:;
- (id)firstMaskCoverImageView;
- (void)configCellWithContext:;
- (void)setFirstMaskCoverImageView:;
- (id)initWithFrame:;
- (id)containerView;
- (void)setContainerView:;
- (void).cxx_destruct;
- (void)setupUI;
- (id)containerContext;
- (void)setContainerContext:;
@end
