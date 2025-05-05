@interface MLAppleImageFeatureExtractorObjectPrintParameters : NSObject
@property (nonatomic) Q objectPrintVersion;
@property (nonatomic) NSArray expectedShapes;
@property (nonatomic) NSArray expectedKeys;
- (void).cxx_destruct;
- (id)initObjectPrintParameters:expectedShapes:expectedKeys:error:;
- (unsigned long long)objectPrintVersion;
- (id)expectedShapes;
- (id)expectedKeys;
@end
