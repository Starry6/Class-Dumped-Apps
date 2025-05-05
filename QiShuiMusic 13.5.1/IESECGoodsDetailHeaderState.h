@interface IESECGoodsDetailHeaderState : NSObject
@property (nonatomic) Q pageIndex;
@property (nonatomic) {CGSize=dd} containerSize;
@property (nonatomic) double percent;
@property (nonatomic) q mode;
@property (nonatomic) BOOL isSmallMode;
@property (nonatomic) Q videoState;
- (void)setIsSmallMode:;
- (BOOL)isSmallMode;
- (void)setVideoState:;
- (unsigned long long)videoState;
- (void)setContainerSize:;
- (void)setPageIndex:;
- (unsigned long long)pageIndex;
- (id)containerSize;
- (long long)mode;
- (void)setMode:;
- (double)percent;
- (void)setPercent:;
@end
