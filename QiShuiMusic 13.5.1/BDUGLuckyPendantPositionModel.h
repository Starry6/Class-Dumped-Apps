@interface BDUGLuckyPendantPositionModel : BDUGLuckyJSONModel
@property (nonatomic) double top;
@property (nonatomic) double bottom;
@property (nonatomic) double left;
@property (nonatomic) double right;
- (double)top;
- (void)setTop:;
- (double)left;
- (unsigned long long)hash;
- (double)bottom;
- (double)right;
- (void)setBottom:;
- (BOOL)isEqual:;
- (void)setLeft:;
- (void)setRight:;
@end
