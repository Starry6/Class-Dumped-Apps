@interface NSFileProviderDomainVersion : NSObject
@property (nonatomic) q version;
- (id)next;
- (id)init;
- (long long)version;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (long long)compare:;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithVersion:;
+ (BOOL)supportsSecureCoding;
+ (id)domainVersionWithVersion:;
@end
