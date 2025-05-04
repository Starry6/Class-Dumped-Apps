@interface AWEHotSearchCommentFeedResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray commentCardList;
@property (nonatomic) NSNumber cursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSString bottomPlaceHolder;
@property (nonatomic) AWEHotSearchCommentAdditionalInfo additionalInfo;
@property (nonatomic) AWEHotSearchCommentBackgroundConfig backgroundConfig;
- (id)backgroundConfig;
- (void)setBackgroundConfig:;
- (id)commentCardList;
- (id)bottomPlaceHolder;
- (void)setCommentCardList:;
- (void)setBottomPlaceHolder:;
- (id)cursor;
- (void)setAdditionalInfo:;
- (id)additionalInfo;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
+ (id)commentCardListJSONTransformer;
+ (id)additionalInfoJSONTransformer;
+ (id)backgroundConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
