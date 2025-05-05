@interface ToygerPoint : ToygerBaseModel
@property (nonatomic) q x;
@property (nonatomic) q y;
- (id)init;
- (void)setX:;
- (void)setY:;
- (long long)y;
- (long long)x;
- (id)copyWithZone:;
@end
