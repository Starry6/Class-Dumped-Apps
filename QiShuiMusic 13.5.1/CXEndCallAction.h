@interface CXEndCallAction : CXCallAction
@property (nonatomic) NSDate dateEnded;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)customDescription;
- (void)fulfill;
- (id)dateEnded;
- (void)setDateEnded:;
- (void)updateSanitizedCopy:withZone:;
- (void)fulfillWithDateEnded:;
- (void)updateAsFulfilledWithDateEnded:;
+ (BOOL)supportsSecureCoding;
@end
