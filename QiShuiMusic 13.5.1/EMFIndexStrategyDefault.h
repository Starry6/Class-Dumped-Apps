@interface EMFIndexStrategyDefault : EMFAbstractIndexStrategy
- (id)postingsForTerm:;
- (id)termsForDocument:;
- (id)termWeightForTerm:inDocument:;
- (id)commonDocumentsForTerms:;
- (id)calculateDocumentWeightsForQueryTokenCounts:;
- (double)_calculateCumulativeTermWeightForQueryTokenCounts:inDocumentID:;
@end
