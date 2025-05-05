@interface IESLiveDanmakuBaseNode : NSObject
@property (nonatomic) # danmakuViewClass;
@property (nonatomic) @ danmakuViewModel;
@property (nonatomic) double alpha;
@property (nonatomic) Q priority;
@property (nonatomic) double danmakuHeight;
- (double)danmakuHeight;
- (Class)danmakuViewClass;
- (id)danmakuViewModel;
- (void)setDanmakuHeight:;
- (void)setDanmakuViewClass:;
- (void)setDanmakuViewModel:;
- (void)setPriority:;
- (void)setAlpha:;
- (double)alpha;
- (void).cxx_destruct;
- (unsigned long long)priority;
@end
