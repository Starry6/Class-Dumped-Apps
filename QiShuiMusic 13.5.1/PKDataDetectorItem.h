@interface PKDataDetectorItem : PKDetectionItem
@property (nonatomic) DDScannerResult scannerResult;
@property (nonatomic) ^{__DDResult=} coreResult;
- (id)strokeColor;
- (BOOL)isEqual:;
- (id)coreResult;
- (id)scannerResult;
- (id)drawing;
- (id)_baselinePath;
+ (id)dataDetectorItemWithQueryItem:sessionManager:;
@end
