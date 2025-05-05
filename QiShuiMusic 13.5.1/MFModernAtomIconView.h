@interface MFModernAtomIconView : UIView
@property (nonatomic) NSArray iconImages;
@property (nonatomic) double iconPadding;
@property (nonatomic) {CGPoint=dd} drawingOffset;
- (void)drawRect:;
- (double)preferredWidth;
- (void).cxx_destruct;
- (id)iconImages;
- (void)setIconPadding:;
- (double)iconPadding;
- (id)drawingOffset;
- (void)setDrawingOffset:;
- (void)setIconImages:;
@end
