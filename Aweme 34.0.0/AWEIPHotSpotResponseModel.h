@interface AWEIPHotSpotResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray hotSpotList;
@property (nonatomic) q offset;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSNumber curTimeStamp;
- (id)hotSpotList;
- (void)setHotSpotList:;
- (id)curTimeStamp;
- (void)setCurTimeStamp:;
- (void)setOffset:;
- (long long)offset;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
+ (id)hotSpotListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
