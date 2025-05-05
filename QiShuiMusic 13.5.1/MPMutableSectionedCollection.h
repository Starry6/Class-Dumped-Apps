@interface MPMutableSectionedCollection : MPSectionedCollection
- (void)replaceItemsUsingBlock:;
- (void)insertItem:atIndexPath:;
- (void)moveSectionFromIndex:toIndex:;
- (void)replaceSectionAtIndex:withObject:;
- (void)appendItem:;
- (void)removeAllObjects;
- (void)appendItems:;
- (void)replaceObjectAtIndexPath:withObject:;
- (void)_initializeAsEmptySectionedCollection;
- (void)insertSection:atIndex:;
- (void)replaceSectionsUsingBlock:;
- (void)appendSection:;
- (void)removeItemAtIndexPath:;
- (void)removeSectionAtIndex:;
- (void)moveItemFromIndexPath:toIndexPath:;
- (id)copyWithZone:;
@end
