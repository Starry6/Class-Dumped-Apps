@interface SFSuggestedUser : NSObject
@property (nonatomic) q usageFrequency;
@property (nonatomic) NSString value;
@property (nonatomic) q type;
- (id)init;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (long long)type;
- (long long)compare:;
- (void).cxx_destruct;
- (id)description;
- (id)value;
- (id)initWithValue:type:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (long long)usageFrequency;
- (void)setUsageFrequency:;
+ (BOOL)supportsSecureCoding;
+ (id)suggestedUserWithValue:type:;
@end
