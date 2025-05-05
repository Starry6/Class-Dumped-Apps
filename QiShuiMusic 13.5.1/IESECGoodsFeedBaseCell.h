@interface IESECGoodsFeedBaseCell : UICollectionViewCell
@property (nonatomic) @ delegate;
@property (nonatomic) IGListSectionController sectionDelegate;
- (id)sectionDelegate;
- (id)calculateCellSizeForContaineSize:;
- (void)setSectionDelegate:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)updateWithViewModel:;
@end
