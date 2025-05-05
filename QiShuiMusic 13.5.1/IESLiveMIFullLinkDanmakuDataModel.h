@interface IESLiveMIFullLinkDanmakuDataModel : NSObject
@property (nonatomic) double danmakuNodeCreateTimeSum;
@property (nonatomic) double danmakuNodeShowTimeSum;
@property (nonatomic) double chatDanmakuNodeShowTimeSum;
@property (nonatomic) q chatDanmakuNodeShowCount;
@property (nonatomic) q danmakuNodeShowCount;
@property (nonatomic) q danmakuNodeCreateCount;
- (long long)chatDanmakuNodeShowCount;
- (double)chatDanmakuNodeShowTimeSum;
- (long long)danmakuNodeCreateCount;
- (double)danmakuNodeCreateTimeSum;
- (long long)danmakuNodeShowCount;
- (double)danmakuNodeShowTimeSum;
- (void)setChatDanmakuNodeShowCount:;
- (void)setChatDanmakuNodeShowTimeSum:;
- (void)setDanmakuNodeCreateCount:;
- (void)setDanmakuNodeCreateTimeSum:;
- (void)setDanmakuNodeShowCount:;
- (void)setDanmakuNodeShowTimeSum:;
@end
