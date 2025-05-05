@interface IDSNegativeInfo : NSObject
@property (nonatomic) double time;
@property (nonatomic) q count;
- (double)time;
- (id)description;
- (long long)count;
- (id)copyWithZone:;
- (id)initWithTime:count:;
@end
