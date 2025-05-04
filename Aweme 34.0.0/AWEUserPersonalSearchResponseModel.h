@interface AWEUserPersonalSearchResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray awemeList;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) q cursor;
@property (nonatomic) NSDictionary extra;
@property (nonatomic) AWEUserSearchDoodleConfigModel doodleConfig;
- (void)setExtra:;
- (id)awemeList;
- (void)setAwemeList:;
- (id)doodleConfig;
- (void)setDoodleConfig:;
- (long long)cursor;
- (void)setHasMore:;
- (id)extra;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
+ (id)awemeListJSONTransformer;
+ (id)doodleConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
