@interface IESECCommentMeaninglessFooterCell : UICollectionViewCell
@property (nonatomic) UILabel descLabel;
@property (nonatomic) UIView containerView;
@property (nonatomic) <IESECCommentMeaninglessFooterCellDelegate> delegate;
- (void)p_setup;
- (id)descLabel;
- (void)footerContainerClick;
- (BOOL)isShopComment:;
- (void)setDescLabel:;
- (void)updateUIWithModel:dataController:;
- (id)containerView;
- (void)setContainerView:;
- (void)setDelegate:;
- (id)initWithFrame:;
- (id)delegate;
- (void).cxx_destruct;
@end
