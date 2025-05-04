@interface AWEV2ImageWannaFeedResponse : AWEBaseResponseModel
@property (nonatomic) q hasMore;
@property (nonatomic) NSArray awemeListArray;
@property (nonatomic) AWEExtraModelV2 extraModel;
- (id)extraModel;
- (void)setExtraModel:;
- (id)awemeListArray;
- (void)setHasMore:;
- (long long)hasMore;
- (void).cxx_destruct;
- (void)setAwemeListArray:;
+ (id)JSONKeyPathsByPropertyKey;
@end
