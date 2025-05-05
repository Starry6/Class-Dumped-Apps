@interface CinematicTrack : BaseTrack
@property (nonatomic) BOOL wasStationaryBefore;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} lastStationaryRect;
@property (nonatomic) {?=qiIq} withinFrameLastTimestamp;
@property (nonatomic) BOOL isOutsideOfView;
@property (nonatomic) BOOL isStationary;
@property (nonatomic) BOOL isTrackedByDirector;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} boundingBoxForFraming;
- (BOOL)isStationary;
- (void).cxx_destruct;
- (id)initWithObservation:identifier:options:atTime:;
- (void)updatePropertiesWithMetadata:inView:;
- (void)setAfterImage:forDuration:atTime:;
- (id)afterImageBoundingBoxAtTime:;
- (void)resetProperties;
- (id)faceBoundingBoxForFramingAtTime:;
- (BOOL)wasStationaryBefore;
- (id)lastStationaryRect;
- (BOOL)isOutsideOfView;
- (id)withinFrameLastTimestamp;
- (id)boundingBoxForFraming;
- (void)setBoundingBoxForFraming:;
- (BOOL)isTrackedByDirector;
- (void)setIsTrackedByDirector:;
@end
