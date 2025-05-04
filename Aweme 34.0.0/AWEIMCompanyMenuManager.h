@interface AWEIMCompanyMenuManager : NSObject
+ (void)fetchMenuForCompanyUser:completion:;
+ (id)cachedResultFor:;
+ (void)saveResult:for:;
+ (void)fetchMenuFromRequestForCompanyUser:completion:;
+ (id)cacheKeyForCompany:;
+ (id)memoryCache;
@end
