@interface CNModernAtomIconView : UIView
@property (nonatomic) NSArray iconImages;
@property (nonatomic) NUIContainerStackView stackView;
@property (nonatomic) double iconPadding;
@property (nonatomic) {CGPoint=dd} drawingOffset;
- (void)setStackView:;
- (double)preferredWidth;
- (id)stackView;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)iconImages;
- (void)setIconPadding:;
- (double)iconPadding;
- (id)drawingOffset;
- (void)setDrawingOffset:;
- (void)setIconImages:;
@end
