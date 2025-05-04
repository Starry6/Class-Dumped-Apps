@interface AWELifeFeedsPrefetcher : NSObject
@property (nonatomic) NSDictionary configItemMap;
- (id)fetchConfig;
- (id)configItemWithData:;
- (id)configItemMap;
- (void)setConfigItemMap:;
- (void).cxx_destruct;
+ (id)findConfigItemWithSchema:;
+ (void)asyncPrefetchDataStorageId:schema:configItem:;
+ (id)prefetchDataWithSchema:;
+ (void)prefetchDataWithStorageId:requestParams:;
+ (id)sharedInstance;
@end
