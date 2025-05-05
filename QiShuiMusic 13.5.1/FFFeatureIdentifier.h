@interface FFFeatureIdentifier : NSObject
@property (nonatomic) NSString domainName;
@property (nonatomic) NSString featureName;
- (id)domainName;
- (id)initWithDomain:feature:;
- (unsigned long long)hash;
- (id)featureName;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)identifierFromString:;
@end
