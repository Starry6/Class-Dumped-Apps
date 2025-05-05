@interface AWEIMGroupMessageActiveResponse : IESIMBaseApiModel
@property (nonatomic) NSArray activeTagConfs;
@property (nonatomic) NSArray inactiveThresholdConfs;
@property (nonatomic) NSArray activeInfoList;
@property (nonatomic) q nextCursor;
@property (nonatomic) BOOL hasMore;
- (id)activeInfoList;
- (id)activeTagConfs;
- (id)inactiveThresholdConfs;
- (long long)nextCursor;
- (void)setActiveInfoList:;
- (void)setActiveTagConfs:;
- (void)setInactiveThresholdConfs:;
- (void)setNextCursor:;
- (void)setHasMore:;
- (void).cxx_destruct;
- (BOOL)hasMore;
+ (id)activeInfoListJSONTransformer;
+ (id)activeTagConfsJSONTransformer;
+ (id)inactiveThresholdConfsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
