@interface AWEIMSubscribeListResponse : IESIMBaseApiModel
@property (nonatomic) q nextCursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL isMute;
@property (nonatomic) BOOL hasNew;
@property (nonatomic) NSArray cardList;
- (id)cardList;
- (BOOL)hasNew;
- (long long)nextCursor;
- (void)setCardList:;
- (void)setHasNew:;
- (void)setIsMute:;
- (void)setNextCursor:;
- (void)setHasMore:;
- (void).cxx_destruct;
- (BOOL)hasMore;
- (BOOL)isMute;
+ (id)cardListJSONTransformer;
+ (id)hasMoreJSONTransformer;
+ (id)hasNewJSONTransformer;
+ (id)isMuteJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
