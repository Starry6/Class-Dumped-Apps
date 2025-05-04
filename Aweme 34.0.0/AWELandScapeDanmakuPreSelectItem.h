@interface AWELandScapeDanmakuPreSelectItem : NSObject
@property (nonatomic) AWEDanmakuUnitView danmakuUnitView;
@property (nonatomic) double timestamp;
@property (nonatomic) {CGPoint=dd} pointInDanmakuUnitView;
@property (nonatomic) {CGPoint=dd} point;
- (id)danmakuUnitView;
- (void)setDanmakuUnitView:;
- (id)pointInDanmakuUnitView;
- (void)setPointInDanmakuUnitView:;
- (double)timestamp;
- (id)point;
- (void)setTimestamp:;
- (void).cxx_destruct;
- (void)setPoint:;
@end
