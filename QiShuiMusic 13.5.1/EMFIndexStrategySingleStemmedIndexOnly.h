@interface EMFIndexStrategySingleStemmedIndexOnly : EMFAbstractIndexStrategy
- (id)postingsForTerm:;
- (id)termsForDocument:;
- (id)termWeightForTerm:inDocument:;
- (id)commonDocumentsForTerms:;
- (id)calculateDocumentWeightsForQueryTokenCounts:;
- (id)_postingsForTerm:;
- (id)_postingsForTerms:;
- (id)_termsForDocument:;
- (id)_termWeightForTerm:inDocument:;
- (id)_commonDocumentsForTerms:;
- (id)_calculateDocumentWeightsForQueryTokenCounts:;
@end
