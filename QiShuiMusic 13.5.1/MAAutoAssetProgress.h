@interface MAAutoAssetProgress : NSObject
@property (nonatomic) q totalExpectedBytes;
@property (nonatomic) q totalWrittenBytes;
@property (nonatomic) BOOL isStalled;
@property (nonatomic) double expectedTimeRemainingSecs;
- (id)init;
- (void)setTotalExpectedBytes:;
- (id)copy;
- (long long)totalExpectedBytes;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)summary;
- (id)description;
- (BOOL)isStalled;
- (BOOL)isEqual:;
- (long long)totalWrittenBytes;
- (void)setTotalWrittenBytes:;
- (void)setIsStalled:;
- (double)expectedTimeRemainingSecs;
- (void)setExpectedTimeRemainingSecs:;
+ (BOOL)supportsSecureCoding;
@end
