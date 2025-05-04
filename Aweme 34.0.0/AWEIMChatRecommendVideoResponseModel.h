@interface AWEIMChatRecommendVideoResponseModel : MTLModel
@property (nonatomic) q statusCode;
@property (nonatomic) NSString statusMsg;
@property (nonatomic) Q displayType;
@property (nonatomic) NSString title;
@property (nonatomic) NSArray videos;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)statusMsg;
- (void)setStatusMsg:;
- (long long)statusCode;
- (unsigned long long)displayType;
- (void)setDisplayType:;
- (void).cxx_destruct;
- (id)title;
- (void)setStatusCode:;
- (void)setTitle:;
- (id)videos;
- (void)setVideos:;
+ (id)videosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
