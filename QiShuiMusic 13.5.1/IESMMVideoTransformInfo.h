@interface IESMMVideoTransformInfo : NSObject
@property (nonatomic) float startTime;
@property (nonatomic) float duration;
@property (nonatomic) IESMMVideoTransformBaseInfo startTrasformInfo;
@property (nonatomic) IESMMVideoTransformBaseInfo endTransformInfo;
- (id)endTransformInfo;
- (void)setEndTransformInfo:;
- (void)setStartTrasformInfo:;
- (id)startTrasformInfo;
- (void)setStartTime:;
- (float)startTime;
- (void)setDuration:;
- (id)initWithDict:;
- (void).cxx_destruct;
- (float)duration;
- (id)copyWithZone:;
- (id)toDict;
@end
