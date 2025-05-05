@interface PRAutocorrectionContext : NSObject
- (id)completions;
- (void)reset;
- (id)correction;
- (id)prefixes;
- (void)addInputCharacter:geometryModel:geometryData:;
- (id)currentModifications;
- (id)addedModifications;
- (id)removedModifications;
- (void)addInputCharacter:geometryData:;
- (void)setModificationMask:;
- (unsigned long long)modificationMask;
- (id)guesses;
- (void)setValidSequenceCorrectionThreshold:;
- (double)validSequenceCorrectionThreshold;
+ (void)clearCaches;
+ (id)autocorrectionContextOfType:;
@end
