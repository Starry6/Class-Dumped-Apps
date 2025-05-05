@interface CTSubscriberAlgorithmEAPAKA : CTSubscriberAlgorithm
@property (nonatomic) NSData rand;
@property (nonatomic) NSData autn;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)rand;
- (void)setRand:;
- (id)autn;
- (void)setAutn:;
+ (BOOL)supportsSecureCoding;
@end
