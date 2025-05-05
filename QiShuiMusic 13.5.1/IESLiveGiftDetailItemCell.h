@interface IESLiveGiftDetailItemCell : UICollectionViewCell
@property (nonatomic) UIView containerView;
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) NSString clickURLString;
@property (nonatomic) IESLiveGiftPanelDataSharing giftPanelDataSharing;
- (id)clickURLString;
- (void)didClick;
- (void)didSetAttachingDIContext;
- (id)giftPanelDataSharing;
- (void)setClickURLString:;
- (void)setGiftPanelDataSharing:;
- (void)trackWhenPropDetailEntranceClicked:;
- (void)trackWhenPropDetailEntranceShow:;
- (void)setTitleLabel:;
- (id)containerView;
- (void)setContainerView:;
- (void).cxx_destruct;
- (id)imageView;
- (id)titleLabel;
- (void)setImageView:;
@end
