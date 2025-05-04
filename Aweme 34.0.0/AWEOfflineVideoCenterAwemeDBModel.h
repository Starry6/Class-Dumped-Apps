@interface AWEOfflineVideoCenterAwemeDBModel : NSObject
@property (nonatomic) NSString itemID;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) NSDictionary awemeModelDictionary;
@property (nonatomic) AWEAwemeFeedPreCacheModel preCacheModel;
@property (nonatomic) q lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
- (id)awemeModel;
- (id)initWithAwemeModel:;
- (id)awemeModelDictionary;
- (id)awemeModelDictionaryToModel;
- (id)preCacheModel;
- (void)setAwemeModelDictionary:;
- (void)setPreCacheModel:;
- (void)setModel:;
- (id)itemID;
- (void)setItemID:;
- (id)model;
- (void).cxx_destruct;
+ (id)objectRelationalMappingForWCDB;
+ (id)AllProperties;
+ (id)AnyProperty;
+ (id)PropertyNamed;
+ (id)awemeModelDictionary;
+ (id)preCacheModel;
+ (id)itemID;
+ (id)model;
@end
