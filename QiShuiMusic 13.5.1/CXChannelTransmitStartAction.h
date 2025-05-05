@interface CXChannelTransmitStartAction : CXChannelAction
@property (nonatomic) NSDate startDate;
- (id)startDate;
- (void)setStartDate:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)customDescription;
- (void)fulfill;
- (void)updateSanitizedCopy:withZone:;
- (void)fulfillWithStartDate:;
- (void)updateAsFulfilledWithStartDate:;
+ (BOOL)supportsSecureCoding;
@end
