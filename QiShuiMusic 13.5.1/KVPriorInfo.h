@interface KVPriorInfo : NSObject
- (id)init;
- (float)score;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (unsigned int)ordinality;
- (id)initWithOrdinality:score:;
- (BOOL)isEqualToPriorInfo:;
+ (BOOL)supportsSecureCoding;
@end
