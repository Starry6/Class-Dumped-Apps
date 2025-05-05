@interface IESLiveCarnivalDanmakuRandomConfig : NSObject
@property (nonatomic) double alpha;
@property (nonatomic) double sizeScale;
@property (nonatomic) double verticalOffset;
- (void)setSizeScale:;
- (double)sizeScale;
- (void)setAlpha:;
- (double)alpha;
- (double)verticalOffset;
- (void)setVerticalOffset:;
+ (id)defaulConfig;
@end
