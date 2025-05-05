@interface VESafeArea : NSObject
@property (nonatomic) q style;
@property (nonatomic) double left;
@property (nonatomic) double top;
@property (nonatomic) double right;
@property (nonatomic) double bottom;
- (double)top;
- (void)setStyle:;
- (void)setTop:;
- (double)left;
- (double)bottom;
- (double)right;
- (void)setBottom:;
- (long long)style;
- (void)setLeft:;
- (void)setRight:;
@end
