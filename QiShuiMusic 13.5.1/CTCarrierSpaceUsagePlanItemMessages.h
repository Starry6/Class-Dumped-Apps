@interface CTCarrierSpaceUsagePlanItemMessages : NSObject
@property (nonatomic) NSString capacity;
@property (nonatomic) NSString used;
- (id)capacity;
- (void)setCapacity:;
- (id)used;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (void)setUsed:;
+ (BOOL)supportsSecureCoding;
@end
