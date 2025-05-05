@interface VKTextPosition : VKBaseTextPosition
@property (nonatomic) q offset;
- (void)setOffset:;
- (id)positionByAddingOffset:;
- (id)summaryDescription;
- (long long)offset;
- (id)initWithOffset:;
- (id)description;
- (BOOL)isEqual:;
+ (id)zeroPosition;
+ (id)positionWithOffset:;
@end
