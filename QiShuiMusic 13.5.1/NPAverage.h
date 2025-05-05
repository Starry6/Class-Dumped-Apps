@interface NPAverage : NSObject
@property (nonatomic) NSMutableArray samples;
@property (nonatomic) Q size;
@property (nonatomic) Q average;
@property (nonatomic) BOOL isLastValid;
@property (nonatomic) BOOL isAnyValid;
- (id)samples;
- (id)shortDescription;
- (void)setSamples:;
- (id)initWithCoder:;
- (void)addSample:;
- (void)encodeWithCoder:;
- (void)addSamples:;
- (void).cxx_destruct;
- (id)description;
- (void)setSize:;
- (unsigned long long)average;
- (id)copyWithZone:;
- (unsigned long long)size;
- (id)initWithSampleSize:;
- (BOOL)isLastValid;
- (BOOL)isAnyValid;
+ (BOOL)supportsSecureCoding;
@end
