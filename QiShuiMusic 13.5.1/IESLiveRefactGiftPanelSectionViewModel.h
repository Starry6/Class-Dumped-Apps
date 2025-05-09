@interface IESLiveRefactGiftPanelSectionViewModel : NSObject
@property (nonatomic) {CGSize=dd} layoutViewSize;
@property (nonatomic) NSString reuseIdentifier;
@property (nonatomic) # viewClass;
@property (nonatomic) BOOL useOldCellToSetItem;
@property (nonatomic) <IESLiveCollectionViewItemProtocol> oldItem;
@property (nonatomic) @? willAppearSectionViewBlock;
@property (nonatomic) @? didAppearSectionViewBlock;
@property (nonatomic) @? willDisappearSectionViewBlock;
@property (nonatomic) @? didDisappearSectionViewBlock;
@property (nonatomic) @? shouldShowSectionViewBlock;
@property (nonatomic) @? sectionDidUpdatedBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)oldItem;
- (id)createSectionView;
- (id)didAppearSectionViewBlock;
- (id)didDisappearSectionViewBlock;
- (id)sectionDidUpdatedBlock;
- (void)setDidAppearSectionViewBlock:;
- (void)setDidDisappearSectionViewBlock:;
- (void)setOldItem:;
- (void)setSectionDidUpdatedBlock:;
- (void)setShouldShowSectionViewBlock:;
- (void)setUseOldCellToSetItem:;
- (void)setWillAppearSectionViewBlock:;
- (void)setWillDisappearSectionViewBlock:;
- (id)shouldShowSectionViewBlock;
- (BOOL)useOldCellToSetItem;
- (id)willAppearSectionViewBlock;
- (id)willDisappearSectionViewBlock;
- (id)reuseIdentifier;
- (id)init;
- (Class)viewClass;
- (void).cxx_destruct;
- (void)setReuseIdentifier:;
- (void)setViewClass:;
- (id)layoutViewSize;
- (void)setLayoutViewSize:;
@end
