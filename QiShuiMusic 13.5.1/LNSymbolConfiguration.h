@interface LNSymbolConfiguration : NSObject
@property (nonatomic) double pointSize;
@property (nonatomic) q scale;
@property (nonatomic) q weight;
- (double)pointSize;
- (long long)weight;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (long long)scale;
- (id)copyWithZone:;
- (id)initWithPointSize:scale:weight:;
+ (BOOL)supportsSecureCoding;
@end
