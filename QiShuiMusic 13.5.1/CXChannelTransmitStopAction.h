@interface CXChannelTransmitStopAction : CXChannelAction
@property (nonatomic) NSDate stopDate;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)stopDate;
- (id)customDescription;
- (void)fulfill;
- (void)setStopDate:;
- (void)updateSanitizedCopy:withZone:;
- (void)fulfillWithStopDate:;
- (void)updateAsFulfilledWithStopDate:;
+ (BOOL)supportsSecureCoding;
@end
