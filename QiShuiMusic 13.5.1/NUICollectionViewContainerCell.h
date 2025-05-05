@interface NUICollectionViewContainerCell : UICollectionViewCell
@property (nonatomic) NUIContainerView containerView;
- (id)containerView;
- (id)systemLayoutSizeFittingSize:withHorizontalFittingPriority:verticalFittingPriority:;
- (id)initWithFrame:;
- (id)sizeThatFits:;
- (void).cxx_destruct;
- (void)containerViewDidLoad;
+ (Class)_contentViewClass;
+ (Class)containerViewClass;
@end
