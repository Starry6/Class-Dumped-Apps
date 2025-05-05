@interface IESLiveGiftAuthorizeGuideCell : UICollectionViewCell
@property (nonatomic) IESLiveGiftPanelDataSharing dataSharing;
@property (nonatomic) UILabel label;
@property (nonatomic) UIImageView leftView;
@property (nonatomic) UIImageView rightView;
@property (nonatomic) <IESLiveCollectionViewItemProtocol> item;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <IESLiveRefactGiftPanelSectionVMProtocol> sectionVM;
- (void)setDataSharing:;
- (id)dataSharing;
- (id)sectionVM;
- (void)setSectionVM:;
- (id)item;
- (void)setLabel:;
- (void)tap:;
- (id)label;
- (id)initWithFrame:;
- (void)setItem:;
- (void).cxx_destruct;
- (id)leftView;
- (void)setLeftView:;
- (id)rightView;
- (void)setRightView:;
- (void)setUpUI;
@end
