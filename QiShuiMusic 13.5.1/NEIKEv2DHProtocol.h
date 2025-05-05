@interface NEIKEv2DHProtocol : NSObject
@property (nonatomic) Q group;
- (unsigned long long)hash;
- (unsigned long long)group;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithGroup:;
@end
