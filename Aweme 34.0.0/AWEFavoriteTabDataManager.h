@interface AWEFavoriteTabDataManager : NSObject
+ (void)requestFavoriteTabDetailWithParams:completion:;
+ (id)buildTabData:;
+ (id)requestURL;
@end
