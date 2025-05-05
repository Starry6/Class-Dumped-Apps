@interface CKDistributedTimestampStateVector : CKDistributedTimestampClockVector
- (void)intersectStateVector:;
- (void)addClockValuesInIndexSet:withClockType:atomState:forSiteIdentifier:;
- (void)enumerateAllClockValuesUsingBlock:;
- (void)addClockValuesInIndexSet:withAtomState:forSiteIdentifier:;
- (unsigned char)atomStateForTimestamp:;
- (void)unionVector:;
- (void)unionStateVector:;
- (id)clockVector;
- (id)vectorFilteredByAtomState:;
- (id)descriptionWithStringSiteIdentifiers:usingSuperscripts:;
- (void)enumerateClockValuesForSiteIdentifier:usingBlock:;
- (unsigned char)vectorExpansionState;
- (void)addClockValuesInIndexSet:withClockType:forSiteIdentifier:;
- (id)initWithClockValuesInIndexSet:withAtomState:forSiteIdentifier:;
- (BOOL)hasAtomStateNotInStateVector:;
- (void)minusStateVector:;
- (BOOL)containsTimestampsWithAtomState:;
@end
