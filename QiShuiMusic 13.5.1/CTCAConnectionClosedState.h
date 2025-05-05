@interface CTCAConnectionClosedState : NSObject
@property (nonatomic) q reason;
@property (nonatomic) NSDate closedAt;
@property (nonatomic) Q wasActiveServices;
- (long long)reason;
- (id)initWithCoder:;
- (void)setReason:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)closedAt;
- (void)setClosedAt:;
- (unsigned long long)wasActiveServices;
- (void)setWasActiveServices:;
+ (BOOL)supportsSecureCoding;
@end
