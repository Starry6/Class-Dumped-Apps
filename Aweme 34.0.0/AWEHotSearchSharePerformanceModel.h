@interface AWEHotSearchSharePerformanceModel : NSObject
@property (nonatomic) double viewInitTime;
@property (nonatomic) double clickTime;
@property (nonatomic) double QRDataBackTime;
@property (nonatomic) double hotSearchDataBackTime;
@property (nonatomic) double FeLoadDataTime;
@property (nonatomic) double renderFinishTime;
@property (nonatomic) double showTime;
@property (nonatomic) double allTime;
@property (nonatomic) double fetchTime;
@property (nonatomic) double renderTime;
- (double)showTime;
- (void)setShowTime:;
- (void)setClickTime:;
- (double)clickTime;
- (void)setViewInitTime:;
- (double)QRDataBackTime;
- (void)setQRDataBackTime:;
- (void)setFeLoadDataTime:;
- (void)setHotSearchDataBackTime:;
- (double)hotSearchDataBackTime;
- (double)viewInitTime;
- (double)renderFinishTime;
- (double)FeLoadDataTime;
- (double)fetchTime;
- (double)renderTime;
- (void)setRenderFinishTime:;
- (double)allTime;
@end
