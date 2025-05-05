@interface IESLiveGiftListView : UIView
@property (nonatomic) IESLiveGiftPageCollectionView pageCollectionView;
@property (nonatomic) <IESLiveCollectionViewItemProtocol> item;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <IESLiveRefactGiftPanelSectionVMProtocol> sectionVM;
- (void)didSetAttachingDIContext;
- (id)pageCollectionView;
- (id)sectionVM;
- (void)setPageCollectionView:;
- (void)setSectionVM:;
- (void)updateCurrentGiftListBottomMaskBottomOffset:;
- (id)item;
- (void)layoutSubviews;
- (id)initWithFrame:;
- (void)setItem:;
- (void).cxx_destruct;
@end
