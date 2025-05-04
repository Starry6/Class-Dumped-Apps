@interface AWEECOMIMPaasShopInfoFetchOptionsNew : NSObject
@property (nonatomic) BDECPigeonShopInfoFetchOptionsV2 shopInfoFetchOptions;
@property (nonatomic) BOOL useCache;
@property (nonatomic) double cacheExpirationTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCacheExpirationTime:;
- (id)convertToPigeonShopInfoFetchOptions;
- (void)setShopInfoFetchOptions:;
- (id)shopInfoFetchOptions;
- (id)init;
- (void).cxx_destruct;
- (void)setUseCache:;
- (BOOL)useCache;
- (double)cacheExpirationTime;
+ (id)PaasShopInfoFetchOptionsWithPigeonShopInfoFetchOptions:;
@end
