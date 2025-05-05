@interface ASCContentSkeleton : NSObject
@property (nonatomic) q type;
@property (nonatomic) double rawValue;
- (double)rawValue;
- (unsigned long long)hash;
- (long long)type;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithType:rawValue:;
- (double)widthThatFits:;
+ (id)absoluteSkeleton:;
+ (id)fractionalSkeleton:;
@end
