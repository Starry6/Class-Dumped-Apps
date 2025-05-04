@interface AWEInteractionRedPacketStickerLocationModel : NSObject
@property (nonatomic) double startTime;
@property (nonatomic) {CGPoint=dd} leftTopPoint;
@property (nonatomic) {CGPoint=dd} leftBottomPoint;
@property (nonatomic) {CGPoint=dd} rightTopPoint;
@property (nonatomic) {CGPoint=dd} rightBottomPoint;
- (BOOL)checkTrackArrayValid:;
- (id)configCoordinates:;
- (BOOL)checkTrackPointValid:;
- (id)initWithMeta:withBaseTime:withStartTime:withTrackFileNewType:;
- (id)leftTopPoint;
- (void)setLeftTopPoint:;
- (id)leftBottomPoint;
- (void)setLeftBottomPoint:;
- (id)rightTopPoint;
- (void)setRightTopPoint:;
- (id)rightBottomPoint;
- (void)setRightBottomPoint:;
- (void)setStartTime:;
- (double)startTime;
@end
