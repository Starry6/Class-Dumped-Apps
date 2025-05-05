@interface MPStoreItemMetadataCacheKey : NSObject
@property (nonatomic) NSNumber accountIdentifier;
@property (nonatomic) NSNumber enqueuerAccountIdentifier;
@property (nonatomic) BOOL personalized;
@property (nonatomic) NSString storefrontIdentifier;
- (void)setAccountIdentifier:;
- (id)accountIdentifier;
- (unsigned long long)hash;
- (void)setStorefrontIdentifier:;
- (void)setPersonalized:;
- (BOOL)_isGoodCacheKey;
- (id)initWithRequest:response:;
- (void).cxx_destruct;
- (id)storefrontIdentifier;
- (void)setEnqueuerAccountIdentifier:;
- (BOOL)isPersonalized;
- (id)description;
- (id)enqueuerAccountIdentifier;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (void)_slowGetCacheKeyWithRequest:completionHandler:;
+ (void)_fastGetCacheKeyWithRequest:completionHandler:;
+ (void)getCacheKeyWithRequest:completionHandler:;
@end
