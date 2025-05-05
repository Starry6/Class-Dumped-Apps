@interface IESECStoreSearchHistoryCellVM : NSObject
@property (nonatomic) NSIndexPath indexPath;
@property (nonatomic) BOOL isFoldBtn;
@property (nonatomic) BOOL isFold;
@property (nonatomic) BOOL editing;
@property (nonatomic) NSString title;
@property (nonatomic) @? deleteAction;
@property (nonatomic) @? foldAction;
@property (nonatomic) @? selectAction;
- (id)foldAction;
- (BOOL)isFold;
- (BOOL)isFoldBtn;
- (id)selectAction;
- (void)setFoldAction:;
- (void)setIsFold:;
- (void)setIsFoldBtn:;
- (void)setSelectAction:;
- (void)setIndexPath:;
- (void)setEditing:;
- (id)initWithTitle:;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
- (id)deleteAction;
- (id)indexPath;
- (BOOL)editing;
- (void)setDeleteAction:;
@end
