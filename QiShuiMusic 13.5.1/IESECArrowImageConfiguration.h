@interface IESECArrowImageConfiguration : NSObject
@property (nonatomic) Q direction;
@property (nonatomic) UIColor color;
@property (nonatomic) double lineWidth;
@property (nonatomic) {CGSize=dd} size;
@property (nonatomic) Q lineStyle;
@property (nonatomic) BOOL useInsetDraw;
@property (nonatomic) {UIEdgeInsets=dddd} insets;
- (void)setLineStyle:;
- (void)setUseInsetDraw:;
- (BOOL)useInsetDraw;
- (unsigned long long)direction;
- (void)setLineWidth:;
- (id)init;
- (void)setDirection:;
- (double)lineWidth;
- (void)setColor:;
- (void)setInsets:;
- (id)insets;
- (id)color;
- (void).cxx_destruct;
- (void)setSize:;
- (id)size;
- (unsigned long long)lineStyle;
@end
