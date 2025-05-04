@interface AWETeenInerestChannelListResponseModel : AWEBaseApiModel
@property (nonatomic) Q channelStatusCode;
@property (nonatomic) NSString channelStatusMessage;
@property (nonatomic) NSArray channelList;
- (id)channelList;
- (void)setChannelList:;
- (unsigned long long)channelStatusCode;
- (void)setChannelStatusCode:;
- (id)channelStatusMessage;
- (void)setChannelStatusMessage:;
- (void).cxx_destruct;
+ (id)channelListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
