@interface EFPair : NSObject
@property (nonatomic) <NSObject> first;
@property (nonatomic) <NSObject> second;
- (BOOL)isEqualToPair:;
- (id)second;
- (unsigned long long)hash;
- (id)first;
- (id)initWithFirst:second:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)pairWithFirst:second:;
@end
