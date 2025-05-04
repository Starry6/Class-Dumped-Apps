@interface AWETeenDiscoverChannelResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray channelList;
@property (nonatomic) NSString ageDefaultString;
- (id)channelList;
- (void)setChannelList:;
- (id)ageDefaultString;
- (void)setAgeDefaultString:;
- (void).cxx_destruct;
+ (id)channelListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
