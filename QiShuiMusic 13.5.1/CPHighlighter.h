@interface CPHighlighter : NSObject
@property (nonatomic) ^{CGColor=} color;
@property (nonatomic) ^{CPPDFStyle=^{CGColor}^{CGColorSpace}^{CGColor}^{CGColorSpace}ddCCid@d^{CGPDFObject}^{CGPDFObject}^{CGColor}^{CPPDFStyle}} style;
@property (nonatomic) ^{CPPDFStyle=^{CGColor}^{CGColorSpace}^{CGColor}^{CGColorSpace}ddCCid@d^{CGPDFObject}^{CGPDFObject}^{CGColor}^{CPPDFStyle}} highlightedStyle;
- (void)setStyle:;
- (id)color;
- (id)style;
- (void)highlight;
- (id)initWithTextLine:inZone:ofColor:;
- (id)highlightedStyle;
- (void)setHighlightedStyle:;
+ (BOOL)reconstructHighlightFor:;
@end
