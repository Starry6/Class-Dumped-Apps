@interface AWEIMGroupParticipantInactiveInfoResponse : AWEBaseApiModel
@property (nonatomic) BOOL hasMore;
@property (nonatomic) q nextCursor;
@property (nonatomic) NSArray inactiveModelList;
- (long long)nextCursor;
- (void)setNextCursor:;
- (id)inactiveModelList;
- (void)setInactiveModelList:;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
+ (id)inactiveModelListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
