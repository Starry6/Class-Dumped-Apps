@interface AWETeenDiscoverChannelFeedResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray generalModelList;
@property (nonatomic) NSArray resourceList;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) Q cursor;
@property (nonatomic) q cardCursor;
@property (nonatomic) NSString pageToken;
- (id)pageToken;
- (void)setPageToken:;
- (void)setCardCursor:;
- (long long)cardCursor;
- (id)generalModelList;
- (void)setGeneralModelList:;
- (unsigned long long)cursor;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void)setResourceList:;
- (void).cxx_destruct;
- (id)resourceList;
+ (id)resourceListJSONTransformer;
+ (id)generalModelListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
