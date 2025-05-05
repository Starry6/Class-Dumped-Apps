@interface UIDebuggingInformationHierarchyCell : UICollectionViewCell
@property (nonatomic) NSString name;
@property (nonatomic) UIButton infoButton;
@property (nonatomic) <UIDebuggingInformationHierarchyCellDelegate> delegate;
@property (nonatomic) NSIndexPath indexPath;
@property (nonatomic) BOOL disclosureIndicatorHidden;
- (void)setName:;
- (void)layoutSubviews;
- (void)setDelegate:;
- (void)prepareForReuse;
- (void)applyLayoutAttributes:;
- (id)delegate;
- (void).cxx_destruct;
- (id)name;
- (id)indexPath;
- (void)deliverToggle;
- (void)displayDetailsForCell;
- (id)infoButton;
- (void)setDisclosureIndicatorHidden:;
- (BOOL)disclosureIndicatorHidden;
@end
