@interface CTCAServiceIntervals : NSObject
@property (nonatomic) NSDate startsAt;
@property (nonatomic) NSDate endsAt;
@property (nonatomic) BOOL atStart;
@property (nonatomic) NSArray changesAt;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)startsAt;
- (void)setStartsAt:;
- (id)endsAt;
- (void)setEndsAt:;
- (BOOL)atStart;
- (void)setAtStart:;
- (id)changesAt;
- (void)setChangesAt:;
+ (BOOL)supportsSecureCoding;
@end
