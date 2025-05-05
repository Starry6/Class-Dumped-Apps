@interface CHDataDetectorQueryItem : NSObject
@property (nonatomic) NSSet strokeIdentifiers;
@property (nonatomic) DDScannerResult dataDetectorResult;
@property (nonatomic) r^{CGPath=} estimatedBaseline;
- (void)dealloc;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)dataDetectorResult;
- (BOOL)isEqualToDataDetectorQueryItem:;
- (id)estimatedBaseline;
- (id)strokeIdentifiers;
- (id)initWithStrokeIdentifiers:detectedResult:estimatedBaseline:;
@end
