@interface CTCASilenceInterval : NSObject
@property (nonatomic) NSDate startsAt;
@property (nonatomic) NSDate endsAt;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)startsAt;
- (void)setStartsAt:;
- (id)endsAt;
- (void)setEndsAt:;
+ (BOOL)supportsSecureCoding;
@end
