@interface MFFetchLimits : NSObject
@property (nonatomic) Q fetchMinBytes;
@property (nonatomic) Q fetchMaxBytes;
@property (nonatomic) Q minBytesLeft;
- (id)init;
- (id)description;
- (unsigned long long)fetchMinBytes;
- (void)setFetchMinBytes:;
- (unsigned long long)fetchMaxBytes;
- (void)setFetchMaxBytes:;
- (unsigned long long)minBytesLeft;
- (void)setMinBytesLeft:;
@end
