@interface AWEPadInterestTagDataTool : NSObject
+ (id)cacheStorage;
+ (void)fetchTagWithCompletion:;
+ (void)cacheResponseModel:saveKey:completion:;
+ (void)loadCacheForSaveKey:withCompletion:;
@end
