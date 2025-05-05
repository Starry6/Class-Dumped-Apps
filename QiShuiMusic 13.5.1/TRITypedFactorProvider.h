@interface TRITypedFactorProvider : NSObject
@property (nonatomic) Q type;
@property (nonatomic) <TRINamespaceFactorProviding> provider;
@property (nonatomic) NSString logDesc;
- (id)init;
- (unsigned long long)hash;
- (id)initWithType:provider:logDesc:;
- (id)copyWithReplacementLogDesc:;
- (id)provider;
- (BOOL)isEqualToProvider:;
- (unsigned long long)type;
- (id)copyWithReplacementProvider:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithReplacementType:;
- (BOOL)isEqual:;
- (id)logDesc;
- (id)copyWithZone:;
+ (id)providerWithType:provider:logDesc:;
@end
