@interface AWEProfileExtensionAreaCell : UICollectionViewCell
@property (nonatomic) UIView cardView;
@property (nonatomic) AWEProfileExtensionAreaCellViewModel cellViewModel;
- (id)cellViewModel;
- (void)setCellViewModel:;
- (void)generalAddCardView:;
- (void)addCardView:;
- (void)addCardView:cardSize:alignmentStyle:;
- (void).cxx_destruct;
- (id)cardView;
- (void)setCardView:;
@end
