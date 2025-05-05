@interface PPScoredContactHandle : NSObject
@property (nonatomic) NSString contactHandle;
@property (nonatomic) double score;
- (double)score;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (long long)reverseCompare:;
- (long long)compare:;
- (void).cxx_destruct;
- (id)contactHandle;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithContactHandle:score:;
- (BOOL)isEqualToScoredContactHandle:;
+ (BOOL)supportsSecureCoding;
@end
