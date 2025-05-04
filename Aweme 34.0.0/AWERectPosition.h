@interface AWERectPosition : AWEBaseApiModel
@property (nonatomic) double top;
@property (nonatomic) double left;
@property (nonatomic) double bottom;
@property (nonatomic) double right;
@property (nonatomic) double centerX;
@property (nonatomic) double centerY;
- (id)frameWithSize:;
- (double)top;
- (void)setBottom:;
- (double)right;
- (void)setTop:;
- (double)left;
- (double)bottom;
- (void)setLeft:;
- (double)centerX;
- (double)centerY;
- (void)setCenterX:;
- (void)setCenterY:;
- (void)setRight:;
+ (id)JSONKeyPathsByPropertyKey;
@end
