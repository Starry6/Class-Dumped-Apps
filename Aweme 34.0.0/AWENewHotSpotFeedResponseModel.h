@interface AWENewHotSpotFeedResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray cardList;
@property (nonatomic) NSNumber offset;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSString defaultTabSeparationText;
@property (nonatomic) NSString channelExtendSeparationText;
- (id)cardList;
- (void)setCardList:;
- (id)defaultTabSeparationText;
- (void)setDefaultTabSeparationText:;
- (id)channelExtendSeparationText;
- (void)setChannelExtendSeparationText:;
- (void)setOffset:;
- (id)offset;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
+ (id)cardListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
