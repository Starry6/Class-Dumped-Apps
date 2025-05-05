@interface IESLiveDiamondChangeCell : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIView containerView;
@property (nonatomic) <IESLiveCollectionViewItemProtocol> item;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <IESLiveRefactGiftPanelSectionVMProtocol> sectionVM;
- (void)didSetAttachingDIContext;
- (void)p_setupUI;
- (void)p_tap;
- (id)sectionVM;
- (void)setSectionVM:;
- (id)item;
- (void)setTitleLabel:;
- (id)containerView;
- (void)setContainerView:;
- (void)setItem:;
- (void).cxx_destruct;
- (id)titleLabel;
@end
