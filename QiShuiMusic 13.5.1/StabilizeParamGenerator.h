@interface StabilizeParamGenerator : NSObject
@property (nonatomic) AutoLoopStabilizer stabilizer;
- (void).cxx_destruct;
- (void)ICGetIdentityHomographies:toStabilizeParams:withImageBounds:firstFrameIndex:lastFrameIndex:;
- (void)CopyCoordinateShiftedHomographies:firstIndex:lastIndex:toStabilizeParams:withImageBounds:;
- (id)generateStabilizeParams;
- (id)generatePassThruForAsset:trimStart:trimLength:;
- (id)generateTrivialPassThruForFrameTimes:totalDuration:;
- (id)initWithStabilizer:;
- (id)stabilizer;
- (void)setStabilizer:;
@end
