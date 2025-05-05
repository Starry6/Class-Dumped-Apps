@interface YYTextPosition : UITextPosition
@property (nonatomic) q offset;
@property (nonatomic) q affinity;
- (long long)affinity;
- (unsigned long long)hash;
- (long long)offset;
- (long long)compare:;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)positionWithOffset:;
+ (id)positionWithOffset:affinity:;
@end
