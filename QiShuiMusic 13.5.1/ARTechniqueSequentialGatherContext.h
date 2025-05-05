@interface ARTechniqueSequentialGatherContext : ARTechniqueGatherContext
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithParentContext:;
- (id)gatheredData;
- (void)addResultData:;
- (void)mergeResultsOfContext:resultFilterBlock:;
+ (BOOL)supportsSecureCoding;
@end
