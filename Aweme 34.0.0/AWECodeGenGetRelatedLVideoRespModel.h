@interface AWECodeGenGetRelatedLVideoRespModel : AWEBaseResponseModel
@property (nonatomic) q offset;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSArray awemeListModelArray;
@property (nonatomic) NSInteger dataFrom;
- (id)awemeListModelArray;
- (int)dataFrom;
- (void)setDataFrom:;
- (void)setAwemeListModelArray:;
- (void)setOffset:;
- (long long)offset;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;
@end
