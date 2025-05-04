@interface AWEAwemeVideoDiaryDataModel : MTLModel
@property (nonatomic) NSNumber minCursor;
@property (nonatomic) NSNumber maxCursor;
@property (nonatomic) BOOL hasNextPage;
@property (nonatomic) BOOL hasPrePage;
@property (nonatomic) NSArray awemeList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)awemeList;
- (id)minCursor;
- (void)setAwemeList:;
- (id)maxCursor;
- (void)setMaxCursor:;
- (void)setMinCursor:;
- (BOOL)hasPrePage;
- (void)setHasPrePage:;
- (void).cxx_destruct;
- (void)setHasNextPage:;
- (BOOL)hasNextPage;
+ (id)awemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
