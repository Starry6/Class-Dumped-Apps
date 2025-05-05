@interface VKWKDataDetectorInfo : NSObject
@property (nonatomic) DDScannerResult result;
@property (nonatomic) NSArray boundingQuads;
@property (nonatomic) {_NSRange=QQ} characterRange;
- (id)result;
- (void)setCharacterRange:;
- (id)characterRange;
- (void).cxx_destruct;
- (void)setResult:;
- (id)boundingQuads;
- (void)setBoundingQuads:;
@end
