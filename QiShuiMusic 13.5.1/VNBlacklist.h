@interface VNBlacklist : NSObject
@property (nonatomic) Q identifierCount;
@property (nonatomic) NSSet allIdentifiers;
- (id)initWithIdentifiers:;
- (id)allIdentifiers;
- (unsigned long long)hash;
- (BOOL)containsIdentifier:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (unsigned long long)identifierCount;
+ (id)blacklistFromUTF8StringArray:;
@end
