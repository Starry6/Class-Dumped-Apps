@interface PKDataDetectorQueryItem : PKDetectionQueryItem
@property (nonatomic) CHDataDetectorQueryItem coreHandwritingDataDetectorQueryItem;
@property (nonatomic) DDScannerResult scannerResult;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)scannerResult;
- (id)strokeIdentifiers;
- (id)baselinePath;
- (id)initWithCoreHandwritingDataDetectorQueryItem:;
- (id)coreHandwritingDataDetectorQueryItem;
- (void)setCoreHandwritingDataDetectorQueryItem:;
@end
