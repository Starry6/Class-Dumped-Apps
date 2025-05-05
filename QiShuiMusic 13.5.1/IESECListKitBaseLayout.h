@interface IESECListKitBaseLayout : UICollectionViewLayout
@property (nonatomic) NSMutableArray ieseclistkit_deletedIndexPaths;
@property (nonatomic) NSMutableArray ieseclistkit_insertedIndexPaths;
- (id)ieseclistkit_insertedIndexPaths;
- (void)ieseclistkit_addDecorationAttributesAtSection:frame:backgroundColor:;
- (id)ieseclistkit_decorationAttributes;
- (id)ieseclistkit_deletedIndexPaths;
- (void)ieseclistkit_finalizeCollectionViewUpdates;
- (id)ieseclistkit_indexPathsToDeleteForDecorationViewOfKind:;
- (id)ieseclistkit_indexPathsToInsertForDecorationViewOfKind:;
- (BOOL)ieseclistkit_isDeletedIndexPath:;
- (BOOL)ieseclistkit_isInsertedIndexPath:;
- (id)ieseclistkit_layoutAttributesForDecorationViewOfKind:atIndexPath:;
- (id)ieseclistkit_layoutAttributesForDecorationViewsInRect:;
- (void)ieseclistkit_prepareDecorationAttributes;
- (void)ieseclistkit_prepareForCollectionViewUpdates:;
- (void)ieseclistkit_registerDecorationView;
- (void)setIeseclistkit_decorationAttributes:;
- (void)setIeseclistkit_deletedIndexPaths:;
- (void)setIeseclistkit_insertedIndexPaths:;
@end
