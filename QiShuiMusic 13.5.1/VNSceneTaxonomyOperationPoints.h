@interface VNSceneTaxonomyOperationPoints : VNOperationPoints
- (void)dealloc;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)_propertyListRepresentation;
- (BOOL)isEqual:;
- (BOOL)getDefaultConfidence:forClassificationIdentifier:error:;
- (BOOL)getConfidence:forClassificationIdentifier:withPrecision:error:;
- (BOOL)getPrecision:forClassificationIdentifier:confidence:error:;
- (BOOL)getConfidence:forClassificationIdentifier:withRecall:error:;
- (BOOL)getRecall:forClassificationIdentifier:confidence:error:;
- (id)initWithLabelToOperationPointsDataIndexMap:operationPointsDataArray:;
- (id)_operationPointsDataForClassificationIdentifier:error:;
- (id)_allClassificationIdentifiers;
+ (BOOL)supportsSecureCoding;
+ (id)loadFromURL:error:;
+ (id)loadFromIdentifier:error:;
+ (id)URLForIdentifier:error:;
+ (id)loadFromPropertyList:error:;
@end
