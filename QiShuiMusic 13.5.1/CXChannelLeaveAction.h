@interface CXChannelLeaveAction : CXChannelAction
@property (nonatomic) NSDate leaveDate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)customDescription;
- (void)fulfill;
- (void)updateSanitizedCopy:withZone:;
- (id)leaveDate;
- (void)fulfillWithLeaveDate:;
- (void)setLeaveDate:;
+ (BOOL)supportsSecureCoding;
@end
