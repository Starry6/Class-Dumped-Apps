@interface AWEHomePageRemoteBaseCollectionViewCell : UICollectionViewCell
@property (nonatomic) <AWEHomePageRemoteBaseCollectionViewCellDelegate> delegate;
@property (nonatomic) AWEHomePageRemoteItemModel itemModel;
@property (nonatomic) UIView containerView;
- (id)itemModel;
- (void)setItemModel:;
- (void)setDelegate:withItemModel:;
- (void)updateDelegate:withItemModel:;
- (id)delegate;
- (id)containerView;
- (void)setContainerView:;
- (void).cxx_destruct;
- (void)setDelegate:;
@end
