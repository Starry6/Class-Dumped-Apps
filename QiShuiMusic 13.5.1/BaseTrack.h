@interface BaseTrack : NSObject
@property (nonatomic) Detection firstObservation;
@property (nonatomic) {?=qiIq} firstTimestamp;
@property (nonatomic) Detection lastObservation;
@property (nonatomic) {?=qiIq} lastTimestamp;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} estimatedBoundingBox;
@property (nonatomic) q identifier;
@property (nonatomic) q type;
@property (nonatomic) BaseTrack pairTrack;
- (void)dealloc;
- (long long)identifier;
- (long long)type;
- (void).cxx_destruct;
- (id)lastTimestamp;
- (id)initWithObservation:identifier:type:atTime:;
- (void)addObservation:atTime:;
- (id)estimatedBoundingBox;
- (id)firstObservation;
- (id)firstTimestamp;
- (id)lastObservation;
- (id)pairTrack;
- (void)setPairTrack:;
@end
