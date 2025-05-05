@interface CTCarrierSpaceUsagePlanItemVoice : NSObject
@property (nonatomic) NSString minutesCapacity;
@property (nonatomic) NSString minutesUsed;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)minutesCapacity;
- (void)setMinutesCapacity:;
- (id)minutesUsed;
- (void)setMinutesUsed:;
+ (BOOL)supportsSecureCoding;
@end
