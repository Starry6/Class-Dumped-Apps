@interface IMPair : NSObject
@property (nonatomic) @ first;
@property (nonatomic) @ second;
- (void)dealloc;
- (id)second;
- (unsigned long long)hash;
- (id)first;
- (id)initWithFirst:second:;
- (void)setFirst:;
- (void).cxx_destruct;
- (id)description;
- (void)setSecond:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)pairWithFirst:second:;
@end
