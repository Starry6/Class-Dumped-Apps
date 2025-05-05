@interface IESWaterMarkData : NSObject
@property (nonatomic) NSArray waterMark;
@property (nonatomic) {CGPoint=dd} point;
@property (nonatomic) {CGSize=dd} targetVideoSize;
@property (nonatomic) q refreshInterval;
@property (nonatomic) IESMediaTimeRange showTimeRange;
- (id)targetVideoSize;
- (id)convertToSticker;
- (void)setShowTimeRange:;
- (void)setTargetVideoSize:;
- (id)showTimeRange;
- (id)point;
- (id)init;
- (long long)refreshInterval;
- (void).cxx_destruct;
- (id)description;
- (void)setRefreshInterval:;
- (void)setPoint:;
- (id)waterMark;
- (void)setWaterMark:;
@end
