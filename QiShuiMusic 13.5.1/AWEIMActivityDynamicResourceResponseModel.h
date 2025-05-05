@interface AWEIMActivityDynamicResourceResponseModel : MTLModel
@property (nonatomic) NSDictionary easy_emoji_conf;
@property (nonatomic) NSDictionary redpacket_conf;
@property (nonatomic) NSArray easy_emoji;
@property (nonatomic) NSArray keyword_animate;
@property (nonatomic) NSArray keyword_conf;
@property (nonatomic) BOOL xmoji_uploaded;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)easy_emoji_conf;
- (id)keyword_animate;
- (id)easy_emoji;
- (id)keyword_conf;
- (id)redpacket_conf;
- (void)setEasy_emoji:;
- (void)setEasy_emoji_conf:;
- (void)setKeyword_animate:;
- (void)setKeyword_conf:;
- (void)setRedpacket_conf:;
- (void)setXmoji_uploaded:;
- (BOOL)xmoji_uploaded;
- (void).cxx_destruct;
+ (id)usersJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
