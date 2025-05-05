@interface SAUITemplateCollectionView : SAUITemplateBaseItem
@property (nonatomic) NSArray cells;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)cells;
- (void)setCells:;
+ (id)collectionView;
+ (id)collectionViewWithDictionary:context:;
@end
