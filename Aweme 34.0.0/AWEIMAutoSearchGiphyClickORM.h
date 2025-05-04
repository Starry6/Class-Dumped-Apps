@interface AWEIMAutoSearchGiphyClickORM : NSObject
@property (nonatomic) NSString search_key;
@property (nonatomic) q click_count;
@property (nonatomic) q timestamp;
- (id)search_key;
- (long long)click_count;
- (void)setSearch_key:;
- (void)setClick_count:;
- (long long)timestamp;
- (void)setTimestamp:;
- (void).cxx_destruct;
+ (id)objectRelationalMappingForWCDB;
+ (id)AllProperties;
+ (id)AnyProperty;
+ (id)PropertyNamed;
+ (id)search_key;
+ (id)click_count;
+ (id)timestamp;
+ (id)tableName;
@end
