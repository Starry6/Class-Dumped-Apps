@interface AWESearchVideoStatisticsUtil : NSObject
@property (nonatomic) double beginTimestamp;
@property (nonatomic) double endDragTimestamp;
@property (nonatomic) NSMutableDictionary extraInfo;
@property (nonatomic) NSMutableDictionary timeInfo;
@property (nonatomic) BOOL finishInteractAfterAnimate;
- (void)cleanDragEndTimestamp;
- (void)trackEnterInnerVideoPlayCostWithScene:extraInfo:;
- (void)trackSlideVideoFirstFrameCostWithScene:extraInfo:;
- (void)videoDragEnd;
- (void)beginEnterInner;
- (void)trackEnterInnerTimeCostWithScene:extraInfo:;
- (void)finishAddInteract:;
- (void)setTimeInfo:;
- (void)setFinishInteractAfterAnimate:;
- (BOOL)finishInteractAfterAnimate;
- (void)trackTvent;
- (id)timeInfo;
- (void)setEndDragTimestamp:;
- (double)endDragTimestamp;
- (void)innerExtraInfo:;
- (void).cxx_destruct;
- (double)beginTimestamp;
- (void)setBeginTimestamp:;
- (id)extraInfo;
- (void)setExtraInfo:;
+ (id)shareInstance;
@end
