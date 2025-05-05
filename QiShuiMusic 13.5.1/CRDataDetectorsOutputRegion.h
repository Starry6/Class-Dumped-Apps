@interface CRDataDetectorsOutputRegion : CROutputRegion
@property (nonatomic) Q dataType;
@property (nonatomic) DDScannerResult ddResult;
- (void)setDataType:;
- (unsigned long long)dataType;
- (unsigned long long)type;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)ddResult;
- (id)initWithCRCodableDataRepresentation:version:offset:;
- (id)crCodableDataRepresentation;
- (id)copyWithZone:copyChildren:copyCandidates:;
- (BOOL)computesBoundsFromChildren;
- (BOOL)computesTranscriptFromChildren;
- (void)setDdResult:;
+ (id)outputRegionWithDDResult:children:;
+ (unsigned long long)dataTypeForDDResult:;
@end
