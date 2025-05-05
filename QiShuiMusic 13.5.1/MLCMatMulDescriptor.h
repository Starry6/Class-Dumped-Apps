@interface MLCMatMulDescriptor : NSObject
@property (nonatomic) float alpha;
@property (nonatomic) BOOL transposesX;
@property (nonatomic) BOOL transposesY;
- (unsigned long long)hash;
- (float)alpha;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithAlpha:transposesX:transposesY:;
- (BOOL)transposesX;
- (BOOL)transposesY;
+ (id)descriptor;
+ (id)descriptorWithAlpha:transposesX:transposesY:;
@end
