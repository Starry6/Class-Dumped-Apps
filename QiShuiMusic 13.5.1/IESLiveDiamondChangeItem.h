@interface IESLiveDiamondChangeItem : IESLiveRefactGiftPanelSectionViewModel
@property (nonatomic) {CGSize=dd} layoutViewSize;
@property (nonatomic) NSString reuseIdentifier;
@property (nonatomic) # viewClass;
@property (nonatomic) BOOL useOldCellToSetItem;
@property (nonatomic) <IESLiveCollectionViewItemProtocol> oldItem;
@property (nonatomic) @? willAppearSectionViewBlock;
@property (nonatomic) @? didAppearSectionViewBlock;
@property (nonatomic) @? willDisappearSectionViewBlock;
@property (nonatomic) @? didDisappearSectionViewBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) # cellClass;
@property (nonatomic) {CGSize=dd} cellSize;
@property (nonatomic) BOOL enable;
@property (nonatomic) RACCommand didSelectItemCommand;
@property (nonatomic) <IESLiveGiftPanelReaction> reaction;
- (id)initWithGiftPanelDataSharing:;
- (BOOL)enable;
- (void).cxx_destruct;
- (void)setEnable:;
- (Class)cellClass;
- (id)cellSize;
- (void)setCellSize:;
- (void)setCellClass:;
@end
