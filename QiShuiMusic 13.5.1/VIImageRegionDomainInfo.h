@interface VIImageRegionDomainInfo : NSObject
@property (nonatomic) BOOL isLowConfidence;
@property (nonatomic) NSString domainKey;
@property (nonatomic) NSString labelName;
@property (nonatomic) NSString glyphName;
@property (nonatomic) NSString displayLabel;
@property (nonatomic) NSString displayMessage;
@property (nonatomic) BOOL hasFocalPoint;
@property (nonatomic) {CGPoint=dd} focalPoint;
@property (nonatomic) BOOL ocrResultsRequired;
@property (nonatomic) BOOL barcodeResultsRequired;
- (id)displayLabel;
- (id)domainKey;
- (void).cxx_destruct;
- (id)displayMessage;
- (BOOL)isEqual:;
- (id)glyphName;
- (id)copyWithZone:;
- (BOOL)isLowConfidence;
- (id)labelName;
- (BOOL)hasFocalPoint;
- (id)focalPoint;
- (id)initWithDomainKey:labelName:glyphName:displayLabel:displayMessage:hasFocalPoint:focalPoint:ocrResultsRequired:barcodeResultsRequired:isLowConfidence:;
- (BOOL)ocrResultsRequired;
- (BOOL)barcodeResultsRequired;
@end
