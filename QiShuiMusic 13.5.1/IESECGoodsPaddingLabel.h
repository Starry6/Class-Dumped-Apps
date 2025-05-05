@interface IESECGoodsPaddingLabel : UILabel
@property (nonatomic) BOOL isDraw;
@property (nonatomic) {CGSize=dd} padding;
- (id)initWithDraw:;
- (BOOL)isDraw;
- (void)setIsDraw:;
- (void)drawRect:;
- (id)intrinsicContentSize;
- (void)setPadding:;
- (id)padding;
@end
