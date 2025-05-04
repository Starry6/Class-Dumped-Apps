@interface AWEECGoodsFeedImmersiveResponseModel : IESECBaseApiModel
@property (nonatomic) NSArray feeds;
@property (nonatomic) AWEECGoodsFeedImmersiveCursorModel cursor;
- (id)cursor;
- (id)feeds;
- (void)setCursor:;
- (void).cxx_destruct;
- (void)setFeeds:;
+ (id)feedsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)cursorJSONTransformer;
@end
