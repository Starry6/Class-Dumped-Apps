@interface CXPullCallAction : CXCallAction
@property (nonatomic) NSDate dateConnected;
@property (nonatomic) CXHandoffContext handoffContext;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)customDescription;
- (void)fulfill;
- (id)sanitizedCopyWithZone:;
- (id)handoffContext;
- (id)dateConnected;
- (void)setDateConnected:;
- (void)updateCopy:withZone:;
- (void)fulfillWithDateConnected:;
- (void)updateAsFulfilledWithDateConnected:;
- (void)setHandoffContext:;
+ (BOOL)supportsSecureCoding;
+ (double)timeout;
@end
