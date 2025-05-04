@interface AWEPlayletDataControllerCache : NSObject
@property (nonatomic) q cacheSize;
@property (nonatomic) NSMutableArray itemIdArray;
@property (nonatomic) NSMutableDictionary controllerDic;
- (id)itemIdArray;
- (void)setItemIdArray:;
- (void)cacheDataController:byItemId:;
- (void)setControllerDic:;
- (id)controllerDic;
- (id)dataControllerWithItemId:;
- (long long)cacheSize;
- (id)init;
- (void).cxx_destruct;
- (void)setCacheSize:;
+ (id)sharedInstance;
@end
