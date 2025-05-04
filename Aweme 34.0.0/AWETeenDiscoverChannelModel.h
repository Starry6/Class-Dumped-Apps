@interface AWETeenDiscoverChannelModel : AWEBaseApiModel
@property (nonatomic) NSString channelId;
@property (nonatomic) NSString channelName;
@property (nonatomic) AWEURLModel iconUrl;
@property (nonatomic) AWEURLModel titleIconUrl;
@property (nonatomic) q channelType;
@property (nonatomic) BOOL isRecommend;
@property (nonatomic) q channelKind;
- (id)iconUrl;
- (void)setIconUrl:;
- (BOOL)isRecommend;
- (id)titleIconUrl;
- (void)setTitleIconUrl:;
- (void)setIsRecommend:;
- (long long)channelKind;
- (void)setChannelKind:;
- (long long)channelType;
- (void).cxx_destruct;
- (id)channelName;
- (id)channelId;
- (void)setChannelId:;
- (void)setChannelName:;
- (void)setChannelType:;
+ (id)iconUrlJSONTransformer;
+ (id)titleIconUrlJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
