@interface CNPair : NSObject
@property (nonatomic) @ first;
@property (nonatomic) @ second;
- (id)second;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)first;
- (void)encodeWithCoder:;
- (id)initWithFirst:second:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initNonMemoizedWithFirst:second:;
+ (BOOL)supportsSecureCoding;
+ (id)pairWithFirst:second:;
@end
