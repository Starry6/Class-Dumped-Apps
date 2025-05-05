@interface PPScoredLocation : NSObject
@property (nonatomic) PPLocation location;
@property (nonatomic) double score;
@property (nonatomic) double sentimentScore;
- (double)sentimentScore;
- (id)init;
- (double)score;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)location;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithLocation:score:sentimentScore:;
- (BOOL)isEqualToScoredLocation:;
+ (BOOL)supportsSecureCoding;
@end
