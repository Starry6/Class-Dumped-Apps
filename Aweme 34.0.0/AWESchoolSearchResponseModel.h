@interface AWESchoolSearchResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray schoolList;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSNumber cursor;
@property (nonatomic) NSNumber total;
- (id)schoolList;
- (void)setSchoolList:;
- (id)cursor;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
- (id)total;
- (void)setTotal:;
+ (id)schoolListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
