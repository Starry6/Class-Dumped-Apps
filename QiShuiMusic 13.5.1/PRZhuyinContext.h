@interface PRZhuyinContext : PRAutocorrectionContext
- (id)init;
- (void)dealloc;
- (void)reset;
- (id)description;
- (void)_removeModificationsAndMoveStartingPoint;
- (void)_advanceIndexes;
- (void)_addTranspositions;
- (void)_addReplacements;
- (void)_addInsertions;
- (void)_addDeletions;
- (void)_filterModifications;
- (void)addInputCharacter:geometryModel:geometryData:;
- (void)removeNumberOfInputCharacters:;
- (id)currentModifications;
- (id)addedModifications;
- (id)removedModifications;
@end
