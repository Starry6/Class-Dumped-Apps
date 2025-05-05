@interface IDSGFTMetricsReferencePointEvent : NSObject
@property (nonatomic) NSNumber reason;
@property (nonatomic) NSNumber time;
- (void)setTime:;
- (id)time;
- (id)reason;
- (void)setReason:;
- (void).cxx_destruct;
- (id)description;
- (id)initWithTime:reason:;
@end
