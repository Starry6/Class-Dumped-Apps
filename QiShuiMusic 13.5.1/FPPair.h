@interface FPPair : NSObject
@property (nonatomic) @ first;
@property (nonatomic) @ second;
- (BOOL)isEqualToPair:;
- (id)second;
- (unsigned long long)hash;
- (id)first;
- (void)setFirst:;
- (void).cxx_destruct;
- (id)description;
- (void)setSecond:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)pairWithFirst:second:;
@end
