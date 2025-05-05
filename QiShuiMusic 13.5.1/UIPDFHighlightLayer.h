@interface UIPDFHighlightLayer : CALayer
@property (nonatomic) ^{CGPath=} clipPath;
@property (nonatomic) ^{CGPath=} borderPath;
@property (nonatomic) {CGPoint=dd} offset;
- (void)setOffset:;
- (void)dealloc;
- (id)offset;
- (id)clipPath;
- (void)setClipPath:;
- (id)borderPath;
- (void)setBorderPath:;
@end
