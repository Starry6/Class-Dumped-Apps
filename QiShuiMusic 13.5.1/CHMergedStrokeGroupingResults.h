@interface CHMergedStrokeGroupingResults : CHStrokeGroupingResult
@property (nonatomic) NSDictionary groupingResultsByStrategyIdentifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithStrokeGroups:createdStrokeGroups:deletedStrokeGroups:groupingResultsByStrategyIdentifier:;
- (id)groupingResultsByStrategyIdentifier;
+ (BOOL)supportsSecureCoding;
@end
