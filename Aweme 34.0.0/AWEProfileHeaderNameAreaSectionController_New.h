@interface AWEProfileHeaderNameAreaSectionController_New : AWEBaseListSectionController
@property (nonatomic) NSMutableArray binds;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configCell:index:model:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (id)sizeForFooterWithCollectionViewSize:;
- (id)binds;
- (void)setBinds:;
- (void)refreshSection;
- (Class)cellClass;
- (BOOL)showSeparator;
- (void).cxx_destruct;
@end
