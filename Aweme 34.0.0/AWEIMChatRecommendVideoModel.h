@interface AWEIMChatRecommendVideoModel : MTLModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString itemID;
@property (nonatomic) NSString coverURL;
@property (nonatomic) AWEIMChatRecommendVideoTagModel tag;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)itemID;
- (void)setItemID:;
- (id)tag;
- (void)setTag:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)coverURL;
- (void)setCoverURL:;
+ (id)tagJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
