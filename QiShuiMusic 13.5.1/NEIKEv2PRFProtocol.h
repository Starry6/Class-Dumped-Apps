@interface NEIKEv2PRFProtocol : NSObject
@property (nonatomic) Q type;
- (unsigned long long)hash;
- (unsigned long long)type;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithType:;
- (id)copyWithZone:;
@end
