@interface AWEUserWorkReachFrequencyObj : NSObject
@property (nonatomic) BOOL ignore;
@property (nonatomic) q count;
@property (nonatomic) q selectedCount;
@property (nonatomic) double firstShowTimeInterval;
- (double)firstShowTimeInterval;
- (void)setFirstShowTimeInterval:;
- (void)setCount:;
- (void)setSelectedCount:;
- (void)encodeWithCoder:;
- (long long)count;
- (long long)selectedCount;
- (id)initWithCoder:;
- (BOOL)ignore;
- (void)setIgnore:;
@end
