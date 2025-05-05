@interface ARGeoTrackingStatus : NSObject
@property (nonatomic) q failureReasons;
@property (nonatomic) q state;
@property (nonatomic) q stateReason;
@property (nonatomic) q accuracy;
- (void)setState:;
- (id)initWithCoder:;
- (long long)accuracy;
- (void)encodeWithCoder:;
- (long long)state;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (long long)stateReason;
- (void)setStateReason:;
- (id)initWithGeoTrackingState:accuracy:stateReason:failureReasons:;
- (BOOL)isEqualPrivate:;
- (long long)failureReasons;
+ (BOOL)supportsSecureCoding;
+ (id)initialStatus;
@end
