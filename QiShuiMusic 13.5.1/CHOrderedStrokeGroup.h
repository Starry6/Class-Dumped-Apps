@interface CHOrderedStrokeGroup : CHStrokeGroup
@property (nonatomic) NSArray orderedStrokeIdentifiers;
- (void).cxx_destruct;
- (id)orderedStrokeIdentifiers;
- (id)initWithAncestorIdentifier:strokeIdentifiers:firstStrokeIdentifier:lastStrokeIdentifier:bounds:classification:groupingConfidence:strategyIdentifier:firstStrokeOrigin:orderedStrokeIdentifiers:;
- (id)initWithUniqueIdentifier:ancestorIdentifier:strokeIdentifiers:firstStrokeIdentifier:lastStrokeIdentifier:bounds:classification:groupingConfidence:strategyIdentifier:firstStrokeOrigin:orderedStrokeIdentifiers:;
@end
