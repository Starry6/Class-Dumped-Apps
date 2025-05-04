@interface AWEHPListKitCollectionViewCell : DUXBaseCollectionViewCell
@property (nonatomic) UIView containerView;
@property (nonatomic) <AWEHPListKitCollectionViewCellDelegate> delegate;
@property (nonatomic) <AWEHPListKitItemControllerModelProtocol> model;
- (void)setDelegate:withModel:;
- (void)setModel:;
- (id)delegate;
- (id)containerView;
- (void)setFrame:;
- (void)setHighlighted:;
- (id)model;
- (void)setContainerView:;
- (void).cxx_destruct;
- (void)setDelegate:;
@end
