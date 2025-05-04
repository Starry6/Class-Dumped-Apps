@interface AWEIMSubscribeListResponse : AWEBaseApiModel
@property (nonatomic) q nextCursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL isMute;
@property (nonatomic) BOOL hasNew;
@property (nonatomic) NSArray cardList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)nextCursor;
- (void)setNextCursor:;
- (id)cardList;
- (void)setIsMute:;
- (void)setCardList:;
- (BOOL)hasNew;
- (void)setHasNew:;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
- (BOOL)isMute;
+ (id)hasMoreJSONTransformer;
+ (id)cardListJSONTransformer;
+ (id)hasNewJSONTransformer;
+ (id)isMuteJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
