@interface NEIKEv2EAPProtocol : NSObject
@property (nonatomic) Q method;
@property (nonatomic) NSDictionary properties;
- (void)setProperties:;
- (unsigned long long)method;
- (unsigned long long)hash;
- (id)properties;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithMethod:;
@end
