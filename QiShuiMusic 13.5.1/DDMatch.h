@interface DDMatch : NSObject
@property (nonatomic) {_NSRange=QQ} matchedRange;
@property (nonatomic) NSString matchedString;
- (void).cxx_destruct;
- (id)matchedString;
- (id)initWithDDScannerResult:;
- (void)commonInitWithDDScannerResult:originalString:;
- (id)initWithDDScannerResult:originalString:;
- (id)matchedRange;
+ (id)resultWithDDScannerResult:;
+ (id)resultWithDDScannerResult:originalString:;
@end
