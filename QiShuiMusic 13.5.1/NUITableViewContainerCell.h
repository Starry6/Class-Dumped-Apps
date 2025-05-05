@interface NUITableViewContainerCell : UITableViewCell
@property (nonatomic) NUIContainerView containerView;
- (id)initWithStyle:reuseIdentifier:;
- (id)containerView;
- (id)systemLayoutSizeFittingSize:withHorizontalFittingPriority:verticalFittingPriority:;
- (id)sizeThatFits:;
- (void).cxx_destruct;
- (void)containerViewDidLoad;
+ (Class)containerViewClass;
@end
